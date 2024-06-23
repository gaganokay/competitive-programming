// Gagandeep Singh

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/*
    order_of_key (k)
    find_by_order(k)
*/
#define endl '\n'
#define int long long
#define float double
#define sqrt sqrtl
#define setBits(n) __builtin_popcount(n)
#define inputVector(v, n) for(int i = 0; i < n; i++) cin >> v[i]
#define input2dArray(arr, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j]
#define printVector(v, n) for(int i = 0; i < n; i++) cout << v[i] << " "; cout << endl
#define sortVector(arr) sort(arr.begin(), arr.end())
#define sortVectorReverse(arr) sort(arr.rbegin(), arr.rend())
#define sumVector(arr) accumulate(arr.begin(), arr.end(), 0)
const int mod = 1e9 + 7;
const int inf = LLONG_MAX >> 1;
int binpow(int a, int n) {
    if(n == 0) return 1;
    if(n%2 == 1) return (a * binpow(a, n-1)) % mod;
    else {
        int temp = binpow(a, n/2);
        return (temp * temp) % mod;
    }
}
int inverse(int x) {
    return binpow(x, (mod-2));
}
int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

void solve() {
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}
