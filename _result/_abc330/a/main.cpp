#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,l,a;
    cin >> n >> l;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a >= l) sum++;
    }
    cout << sum << endl;
    return 0;
}
