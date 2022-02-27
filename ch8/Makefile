CPP=g++
src=$(target)
deps=
obj= $(src:%.cpp=%.o)
prom= $(src:%.cpp=%.out)


$(prom): $(obj)
	$(CPP) $(obj) -o $(prom) 

%.o:%.cpp
	$(CPP) -c $< -o $@

clean:
	rm -rf $(obj)  $(prom)