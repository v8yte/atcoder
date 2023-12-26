#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int K,G,M;
    cin >> K >> G >> M;
    int x = 0;
    int y = 0;
    int z;
    for (int i = 0; i < K; i++) {
        if(x == G) {
            x = 0;
            continue;
        }
        if(y == 0) {
            y = M;
            continue;
        }
        z = min(y,G - x);
        x += z;
        y -= z;
    }
    cout << x << " " << y << endl;
    return 0;
}
