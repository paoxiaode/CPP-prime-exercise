CPP=g++
src=algorithm_sample exercise lambda 4.3_reverse_iter
# deps=
# obj= $(src:%.cpp=%.o)
# prom= $(src:%.cpp=%.out)


all: $(src)

%:%.cpp
	$(CPP) $< -o tmp/$@

clean:
	rm -rf tmp/$(src)