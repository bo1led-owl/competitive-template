CXX = ccache clang++
CXXFLAGS = -std=c++23 -DLOCAL -lm -g -fsanitize=address,undefined

default: check

check: ./build/main
	checker run ./build/main

run: ./build/main
	./build/main

./build/main: main.cpp ./build
	$(CXX) $(CXXFLAGS) main.cpp -o ./build/main

./build:
	mkdir build

clean:
	rm -rf build
