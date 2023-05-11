#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,vector<int>> mp;
    for (int i = 0; i < 8; i++){
        mp[s[i]].push_back(i);
    }
    bool flag = true;
    if((mp['B'][0] % 2 == 0 && mp['B'][1] % 2 == 0) || (mp['B'][0] % 2 == 1 && mp['B'][1] % 2 == 1)) flag = false;
    if(mp['R'][0] > mp['K'][0] || mp['R'][1] < mp['K'][0]) flag = false;
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
