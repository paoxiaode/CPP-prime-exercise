CPP=g++
src=algorithm_sample exercise
# deps=
# obj= $(src:%.cpp=%.o)
# prom= $(src:%.cpp=%.out)


all: $(src)

%:%.cpp
	$(CPP) $< -o $@

clean:
	rm -rf $(src)