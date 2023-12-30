#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,a;
    cin >> n;
    int count = 0;
    bool flag = true;
    vector<int> nums = {};
    for(int i = 0; i < n; i++){
        cin >> a;
        nums.push_back(a);
    }

    while (flag) {
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0) {
                nums[i] /= 2;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag) count++;
    }
    cout << count << endl;
    return 0;
}
