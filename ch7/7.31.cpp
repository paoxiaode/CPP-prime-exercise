#include <iostream>
using namespace std;

class x;

class Y{
    x* y = nullptr;
};

class x{
    Y* a = nullptr;
};

