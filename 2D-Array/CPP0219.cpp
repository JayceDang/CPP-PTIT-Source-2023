#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        bool row[n] = {0}, col[m] = {0};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                if (x == 1) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (row[i] || col[j])
                    cout << "1 ";
                else 
                    cout << "0 ";
            }
            cout << "\n";
        }
    }
    return 0;
}
