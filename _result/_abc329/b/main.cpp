#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,a;
    cin >> n;
    int max = 1;
    int ans = 1;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a > max){
            ans = max;
            max = a;
        }
        if(a > ans && a < max){
            ans = a;
        }
    }
    cout << ans << endl;
    return 0;
}
