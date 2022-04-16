CPP=g++
src=11.3 11.4 11.7 11.9 11.12 11.20 11.29 11.33
# deps=
# obj= $(src:%.cpp=%.o)
# prom= $(src:%.cpp=%.out)
# that is a test of gedit

all: $(src)

%:%.cpp
	$(CPP) $< -o tmp/$@

clean:
	rm -rf tmp/$(src)
