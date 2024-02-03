#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N,A;
    cin >> N;
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        cin >> A;
        ans += A;
        if (ans < 0) ans = 0;
    }
    cout << ans << endl;
    return 0;
}
