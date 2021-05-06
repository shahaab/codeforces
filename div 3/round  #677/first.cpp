#include <bits/stdc++.h>
using namespace std;

void solve() {
    int cases, digits = 0, first = 0;
    cin >> cases;
    // while (cases != 0)
    // {
    //     cases = cases / 10;
    //     ++n;
    // }
    // string s = to_string(cases);
    //     q = s.back();

        digits= floor(log10(cases) + 1);
        first=(cases / pow(10, digits-1));
        // cout << q << n << endl;
        // cout << digits << first << endl;
        // cout << (q * 4) + n << endl ;
        

        //cout << ((first - 1) * 4) + digits << endl;
        int sum = 0;
   for (int x=1; x<=digits; x++)
     {sum = sum + x;}
       cout << (10 * (first-1)) + sum << endl;
}

int main() {
    int tests;
    cin >> tests;
    while (tests --> 0) {
        solve();
    }
    return 0;
}