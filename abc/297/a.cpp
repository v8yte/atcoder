#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i > 0 && v[i] - v[i-1] <= d){
            cout << v[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
