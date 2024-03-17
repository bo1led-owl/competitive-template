#include <immintrin.h>

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <ratio>
#include <set>
#include <string>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef size_t usize;
typedef float f32;
typedef double f64;

template <typename T>
T ipow(T n, T p) {
    T res = 1;
    while (p > 0) {
        if (p % 2 == 1) {
            res *= n;
        }
        n *= n;
        p /= 2;
    }
    return res;
}

template <typename T>
inline T sqr(const T n) {
    return n * n;
}

constexpr i64 MOD = u32(1e9 + 7);
constexpr usize SIZE = usize(2e5);

void solve() {}

i32 main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifdef LOCAL
    //     freopen("input.txt", "r", stdin);
    // //     // freopen("output.txt", "w", stdout);
    // #endif

    solve();

    return 0;
}
