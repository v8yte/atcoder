#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int H,W,N;
    cin >> H >> W >> N;
    vector<vector<char>> grid(H);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            grid.at(i).push_back('.');
        }
    }
    
    vector<int> current = {0,0};
    int direct = 0; // 0↑ 1→ 2↓ 3←
    for (int n = 0; n < N; n++) {
        if (grid[current[0]][current[1]] == '.') {
            grid[current[0]][current[1]] = '#';
            direct++;
        }else{
            grid[current[0]][current[1]] = '.';
            direct--;
        }
        if (direct == 4) direct = 0;
        if (direct == -1) direct = 3;

        switch (direct) {
            case 0:
                if (current[0] == 0) {
                    current[0] = H-1;
                }else{
                    current[0]--;
                }
                break;
            case 1:
                if (current[1] == W-1) {
                    current[1] = 0;
                }else{
                    current[1]++;
                }
                break;
            case 2:
                if (current[0] == H-1) {
                    current[0] = 0;
                }else{
                    current[0]++;
                }
                break;
            case 3:
                if (current[1] == 0) {
                    current[1] = W-1;
                }else {
                    current[1]--;
                }
                break;
            default:
                break;
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}
