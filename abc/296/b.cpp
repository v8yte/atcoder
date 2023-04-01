#include <bits/stdc++.h>
using namespace std;

int main() {
    // Correct order: ["a","b","c","d","e","f","g","h"]
    char c[8] = {'a','b','c','d','e','f','g','h'};
    char n[8] = {'8','7','6','5','4','3','2','1'};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char s;
            cin >> s;
            if (s == '*') {
                cout << c[j] << n[i] << endl;
            }
        }
    }
    return 0;
}
