#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    int count = 0;
    while (N > 0) {
        if (N%2 == 1){
            break;
        }
        count++;
        N /= 2;
    }
    cout << count << endl;
    return 0;
}
