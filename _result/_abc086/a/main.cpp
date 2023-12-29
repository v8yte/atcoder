#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a,b,ab;
    cin >> a >> b;
    ab = a*b;
    if((ab & 1) == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
    return 0;
}
