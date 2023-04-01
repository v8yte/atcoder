#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    long long X;
    cin >> N >> X;
    vector<long long> A(N);
    unordered_set<long long> elements;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        elements.insert(A[i]);
    }

    for (const auto &a : A) {
        if (elements.count(a - X)) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
