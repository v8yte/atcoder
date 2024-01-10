#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N,A;
    cin >> N >> A;
    
    N %= 500;
    if (N <= A) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
