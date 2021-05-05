#include <bits/stdc++.h>
using namespace std;

#define ll  long long int

int main() {
    int t;
    ll n;
    cin >> t;
    int count = 0;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        cout << count;
        }
    }
}