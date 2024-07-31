OUT = build
CXX = g++
CXXFLAGS = -std=c++20 -DLOCAL -lm -Wall -Wno-sign-compare -g -fsanitize=address,undefined

default: check

check:
	checker run $(OUT)/main

run: $(OUT)
	build/main

%: %.cpp $(OUT)
	$(CXX) $(CXXFLAGS) $< -o $(OUT)/main

$(OUT):
	mkdir $(OUT)

clean:
	rm -rf $(OUT)
