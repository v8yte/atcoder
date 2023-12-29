#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string a,b;
    cin >> a >> b;
    int c = stoi(a + b);
    if(int(sqrt(c)) * int(sqrt(c)) == c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
