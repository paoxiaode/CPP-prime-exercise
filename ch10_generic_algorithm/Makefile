CPP=g++
src=algorithm_sample 10.6
# deps=
# obj= $(src:%.cpp=%.o)
# prom= $(src:%.cpp=%.out)


all: $(src)

%:%.cpp
	$(CPP) $< -o $@

clean:
	rm -rf $(src)