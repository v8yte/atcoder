#include <bits/stdc++.h>
#include <map>
using namespace std;
using ll = long long;

int main() {
    string S;
    cin >> S;
    map<char, int> hashmap{};
    int sum = 0;
    vector<char> cache;
    for(int i = 0; i < S.length(); i++){
        hashmap[S[i]]++;
        if(sum == hashmap[S[i]]){
            cache.push_back(S[i]);
        }
        if (sum < hashmap[S[i]]){
            sum = hashmap[S[i]];
            cache.clear();
            cache.push_back(S[i]);
        }
    }
    sort(cache.begin(), cache.end());
    cout << cache[0] << endl;
    return 0;
}
