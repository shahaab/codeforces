#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int temp = 0;
    for (int i = 0; i < n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        // sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        cout << v.size() << "\n";
        for (int x : v){
        cout << x << " ";
        }
    }