#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, w;
        cin >> n >> w;
        int sum = 0, weight[n], q = 0;
        for (int i = 0; i < n; i++) {
            cin >> weight[i];
            sum += weight[i]; 
            if (sum == w) {
                q = 1;
            }
        }
        reverse(weight, weight + n);

        if(sum == w){
            cout << "NO" << endl;
        } else if(q == 1) {
            cout << "YES" << endl;
            int x = weight[n - 1], j;
            for (j = n - 1; j > 0; j--) {
                weight[i] = weight[i - 1];
                weight[0] = x;
            }
            
        } else {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
            cout << weight[i] << " ";
        }   cout << endl;
        }
    }

}