#include <iostream>
#include <vector>
using namespace std;

class Screen;

class Window_mgr
{
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        inline void clear(ScreenIndex);
    private:
        std::vector<Screen> screens;
};

class Screen{
    public:
        friend void Window_mgr::clear(ScreenIndex);
        typedef string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wi):height(ht), width(wi), contents(ht*wi,' '){}
        Screen(pos ht, pos wi, char c):height(ht), width(wi), contents(ht*wi,c){}
        char get() const{return contents[cursor];}
        char get(pos r, pos c) const { return contents[r*width + c];}
        inline Screen& move(pos r, pos c);
        inline Screen& set(char c);

        const Screen& display(std::ostream &os) const { do_display(os); return *this; }
        Screen& display(std::ostream &os) { do_display(os); return *this; }

    private:
        pos cursor = 0;
        pos height, width = 0;
        string contents;

        void do_display(std::ostream &os) const { os << contents; }
};

inline void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = std::string(s.height*s.width,' ');
}

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r*width + c;
    return *this;
}

inline Screen& Screen::set(char c){
    contents[cursor] = c;
    return *this;
}


int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    cout << "\n";
    myScreen.display(std::cout);
    cout << "\n";

    return 0;
}