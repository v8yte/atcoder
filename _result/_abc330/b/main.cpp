#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,l,r,a;
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++){
        cin >> a;
        if (i < n-1) cout << min(max(a,l),r) << " ";
        else cout << min(max(a,l),r) << endl;
    }
    return 0;
}
