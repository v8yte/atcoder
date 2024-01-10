#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N,a;
    cin >> N;
    vector<int> cards;
    for(int i = 0; i < N; i++){
        cin >> a;
        cards.push_back(a);
    }
    
    sort(cards.rbegin(),cards.rend());
    
    int res = 0;
    for(int i = 0; i < cards.size(); i++){
        if(i%2 == 0){
            res += cards[i];
        }else{
            res -= cards[i];
        }
    }
    cout << res << endl;
    return 0;
}
