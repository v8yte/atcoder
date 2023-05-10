#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(8);
    for (string &t : s) cin >> t;
    map<int,char> cmp = {{0,'a'},{1,'b'},{2,'c'},{3,'d'},{4,'e'},{5,'f'},{6,'g'},{7,'h'}};
    map<int,int> nmp = {{0,8},{1,7},{2,6},{3,5},{4,4},{5,3},{6,2},{7,1}};
    for(int i = 0 ; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(s[i][j] == '*'){
                cout << cmp[j] << nmp[i] << endl;
                return 0;
            }
        }
    }
    return 0;
}
