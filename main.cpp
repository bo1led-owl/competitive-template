#include <bits/stdc++.h>
#include <immintrin.h>
using namespace std;

namespace {
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

template <typename T>
void dbg(const T& x) {
#ifndef ONLINE_JUDGE
    cerr << "\tdbg: " << x << '\n';
#endif
}

template <typename T>
T ipow(T n, T p) {
    T res = 1;
    while (p > 0) {
        if (p % 2 == 1) { res *= n; }
        n *= n;
        p /= 2;
    }
    return res;
}

template <typename T>
inline T sqr(T n) {
    return n * n;
}

constexpr ull MOD = ull(1e9 + 7);
constexpr size_t SIZE = size_t(2e5);

void solve() {}
}  // namespace

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // #ifdef LOCAL
    // freopen("input.txt", "r", stdin);
    // // freopen("output.txt", "w", stdout);
    // #endif

    // int t;
    // cin >> t;
    // while (t--) {
    solve();
    // }
}
