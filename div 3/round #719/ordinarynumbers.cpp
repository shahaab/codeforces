#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int q;
        vector<int> a(n);
        while(n) {
            for(int i = 0; i < n; i++) {
            q = n % 10;
            n = n / 10;
                a[i] = q;
            }
           // for (int i = 0; i < n; ++i) {
            //}
        }
  //  for (int i = 1; i < a.size(); i++) 


//{
  //  if (a[i] == a[i+1]) // .size() should be used
    //{
      //  r++;
    //}
//}
    //cout << r + 1 << endl;
        //cout << a.size() << endl;








        int r = 0;
        for (int i = 0; i < a.size() - 1; i ++) {
            for (int j = i + 1; j < a.size(); j++) {
                if (a[i] == a[j]){
                    r++;
                }
            }
        }
    }
}