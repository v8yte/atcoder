#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (int(s[i]) - 48 == 1) count++;
    }
    cout << count << endl;
    return 0;
}
