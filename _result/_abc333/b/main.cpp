#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool near(char x, char y){
    return abs(x - y) == 1 || abs(x - y) == 4;
}

int main() {
    char s1,s2,t1,t2;
    cin >> s1 >> s2 >> t1 >> t2;
    if (near(s1,s2) == near(t1,t2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

