#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for(auto i : s){
        if(i == '1') count++;
    }
    cout << count << endl;
    return 0;
}
