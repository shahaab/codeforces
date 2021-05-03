#include <bits/stdc++.h>
using namespace std;

// void shuffle_array (int arr[], int n) {
//     unsigned seed = 0;

//     random_shuffle(arr, arr + n);

//     for (int i = 0; i < n; ++i)
//         cout << arr[i] << " ";
// }


void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

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
        }  else {
            if(q == 1) {
            cout << "YES" << endl;
            rotate(weight, n);
            printArr(weight, n);
        } else {
                cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
            cout << weight[i] << " ";
        }
        }   cout << endl;
        }
    }
}