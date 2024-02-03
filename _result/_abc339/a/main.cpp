#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    int count = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '.') break;
        count++;
    }
    S = S.substr(0,count);
    reverse(S.begin(),S.end());
    cout << S << endl;
    return 0;
}
