#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n,k;
    cin >> n >> k;
    map<int, int> m;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        m[x] = i;
    }
    if(m.size() < k)
        cout << "NO";
        else {
            cout << "YES\n";
            for(auto [x, i] : m) {
                if(k)
                k--;
                else 
                break;
                cout << i << ' ';
            }
        }
}