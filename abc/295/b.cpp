#include <bits/stdc++.h>
using namespace std;

int main() {
    int R,C;
    cin >> R >> C;
    vector<string> vec(R);
    for(string &s : vec) cin >> s;
    vector<vector<bool>> seen(R, vector<bool>(C, false));
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(!isdigit(vec[i][j])) continue;
            int num = vec[i][j] - '0';
            for(int ni = 0; ni < R; ni++){
                for(int nj = 0; nj < C; nj++){
                    if(abs(i-ni) + abs(j-nj) <= num) seen[ni][nj] = true;
                }
            }
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(seen[i][j]) vec[i][j] = '.';
        }
    }
    for (string &s : vec) cout << s << endl;
    return 0;
}
