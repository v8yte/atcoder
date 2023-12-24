#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a,m,l,r;
    cin >> a >> m >> l >> r;
    
    // l <= a + km <= r
    // l - a <= km <= r - a
    // (l - a) / m <= k <= (r - a) / m
    l -= a;
    r -= a;
    // l/m <= k <= r/m
    // l < 0 のときl/m < 0
    if (l < 0) {
        // l/m + x > 0 
        // x > - l/m
        ll x = -l/m + 1;
        l += x*m;
        r += x*m;
    }
    cout << r/m - (l-1)/m << endl;
    return 0;
}
