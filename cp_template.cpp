// Gagandeep Singh

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define float double
#define sqrt sqrtl
#define inputVector(v, n) for(int i = 0; i < n; i++) cin >> v[i]
#define input2dArray(arr, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j]
#define printVector(v, n) for(int i = 0; i < n; i++) cout << v[i] << " "; cout << endl
#define sort(arr) sort(arr.begin(), arr.end())
#define sortReverse(arr) sort(arr.rbegin(), arr.rend())
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

void solve() {
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--) solve();

    return 0;
}
