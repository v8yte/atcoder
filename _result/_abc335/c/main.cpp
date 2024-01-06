#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N,Q,q1;
    cin >> N >> Q;
    map<int,vector<int>> coodinate;
    for (int i = 1; i <= N; i++){
        coodinate[i] = vector<int>{i,0};
    }
    
    for (int q = 0; q < Q; q++){
        cin >> q1 ;
        if (q1 == 1){
            // 移動
            char q2;
            cin >> q2;
            for(int i = N; i > 1; i--){
                coodinate[i] = coodinate[i-1];
            }
            switch (q2) {
                case 'U':
                    coodinate[1] = vector<int>{coodinate[1][0],coodinate[1][1]+1};
                    break;
                case 'D':
                    coodinate[1] = vector<int>{coodinate[1][0],coodinate[1][1]-1};
                    break;
                case 'R':
                    coodinate[1] = vector<int>{coodinate[1][0]+1,coodinate[1][1]};
                    break;
                case 'L':
                    coodinate[1] = vector<int>{coodinate[1][0]-1,coodinate[1][1]};
                    break;
                default:break;
            }
        }else{
            // 座標取得
            int q2;
            cin >> q2;
            cout << coodinate[q2][0] << " " << coodinate[q2][1] << endl;
        }
    }
    return 0;
}
