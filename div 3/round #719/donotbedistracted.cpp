#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        auto res = unique(s.begin(), s.end());
        //cout << string(s.begin(), res)
        //<< endl;
        string q = string(s.begin(), res);
        //cout << q << endl;
        int r = 0;
        for (int i = 0; i < q.length() - 1; i ++) {
            for (int j = i + 1; j < q.length(); j++) {
                if (q[i] == q[j]){
                    r++;
                }
            }
        }
        if(r >= 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        


        // int a = 0;
        // for (int i = 0; i < n; i++) {
        //     if (s[i] > s[i+1]){
        //         a++;
        //         continue;
        // }
        // }
        // cout << a << endl;
        // if(a > 1) {
        //     cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }
    }
}