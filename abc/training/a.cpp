#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, 9, 45, 54, 28};
    for (int i = 1; i < v.size(); i++){
        for (int j = i; j > 0 && v[j] < v[j-1]; j--){
            int temp = v[j-1];
            v[j-1] = v[j];
            v[j] = temp;
        };
    };
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    };
    cout << endl;
    return 0;
}
