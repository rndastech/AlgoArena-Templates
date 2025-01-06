#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map =
    tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

#define ain(arr, n)               \
    for (int i = 0; i < n; i++) { \
        cin >> arr[i];            \
    }
#define aout(arr, n)              \
    for (int i = 0; i < n; i++) { \
        cout << arr[i] << " ";    \
    }                             \
    cout << endl;
#define srt(arr, n) sort(arr, arr + n);
#define int long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 2e6;
const int MOD  = 1e9 + 7;

void solve() {
    // Your code here
}

signed main() {
    fast_io;
    int testcases = 1;
    cin >> testcases;
    while (testcases--) {
        solve();
    }
    return 0;
}
