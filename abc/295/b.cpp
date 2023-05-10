#include <bits/stdc++.h>
using namespace std;

int main() {
    int R,C;
    cin >> R >> C;
    vector<string> s(R);
    for(string &t : s) cin >> t;

    vector<vector<bool>> bombFlag(R,(vector<bool>(C,false)));
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(isdigit(s[i][j])){
                int power = s[i][j] - '0';
                for(int ni = 0; ni < R; ni++){
                    for(int nj = 0; nj < C; nj++){
                        if(abs(ni-i) + abs(nj-j) <= power){
                            bombFlag[ni][nj] = true;
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(bombFlag[i][j]){
                s[i][j] = '.';
            }
        }
    }

    for(string &t : s) cout << t << endl;
}
