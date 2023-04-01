#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    if (n == 1){
        cout << "Yes" << endl;
        return 0;
    }
    int temp = s[0];
    for (int i = 1; i < n; i++){
        if (s[i] == temp){
            cout << "No" << endl;
            return 0;
        }
        temp = s[i];
    }
    cout << "Yes" << endl;
    return 0;
}

