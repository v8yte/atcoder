#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int k,g,m,G,M;
    cin >> k >> g >> m;
    G = 0;
    M = 0;
    for (int i = 0; i < k; i++){
        if (G == g){
            G = 0;
            continue;
        }
        if (M == 0) {
            M = m;
            continue;
        }

        if (g - G > M){
            G += M;
            M = 0;
        }else{
            M -= g - G;
            G = g;
        }
    }
    cout << G << " " << M << endl;
    return 0;
}
