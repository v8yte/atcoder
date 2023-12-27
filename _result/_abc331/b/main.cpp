#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,s,m,l,temp;
    cin >> n >> s >> m >> l;
    int ans = 2147483647;
    for (int i = 0; i < 101; i++){
        for (int j = 0; j < 101; j++){
            for (int k = 0; k < 101; k++){
                temp = i*s + j*m + k*l;
                if (i*6 + j*8 + k*12 >= n && temp < ans){
                    ans = temp;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
