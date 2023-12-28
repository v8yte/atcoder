#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if (i < s.length()-1) cout << s[i] << " ";
        else cout << s[i] << endl;
    }
    return 0;
}
