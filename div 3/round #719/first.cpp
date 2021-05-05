#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> ans;
    set<int> s;
    for (int i = n - 1; i >= 0; --i) {
        if (s.count(a[i])) {
            continue;
        }
        ans.push_back(a[i]);
        s.insert(a[i]);
    }
    cout << ans.size() << '\n';
    reverse(ans.begin(), ans.end());
    for (int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
    return 0;
}