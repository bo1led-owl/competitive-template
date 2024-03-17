OUT = build
CXX = g++
CXXFLAGS = -std=c++20 -DLOCAL -lm -Wall -Wno-sign-compare -g -fsanitize=address,undefined

default: check

check:
	checker tests $(OUT)/main

run: $(OUT)
	build/main

$(OUT):
	mkdir $(OUT)

%: %.cpp $(OUT)
	$(CXX) $(CXXFLAGS) $< -o $(OUT)/main

clean:
	rm -rf $(OUT)
