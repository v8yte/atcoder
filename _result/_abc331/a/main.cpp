#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int M,D,y,m,d;
    cin >> M >> D >> y >> m >> d;
    if (d == D){
        d = 1;
        if (m == M){
            m = 1;
            y++;
        }else{
            m++;
        }
    }else{
        d++;
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}
