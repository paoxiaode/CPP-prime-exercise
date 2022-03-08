CPP=g++
src=8.1 8.4_read_from_file 8.10_istringstream 8.11_istringstream fstream_flag
# deps=
# obj= $(src:%.cpp=%.o)
# prom= $(src:%.cpp=%.out)


all: $(src)

%:%.cpp
	$(CPP) $< -o $@

clean:
	rm -rf $(src)
