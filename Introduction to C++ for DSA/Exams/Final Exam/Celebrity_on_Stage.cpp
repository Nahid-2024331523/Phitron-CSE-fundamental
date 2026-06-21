#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n , k; cin >> n >> k;
    vector <long long> arr(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int c1 = 0 , c2 = 0;
    for(int i = 0 ; i < k ; i++) {
        if(arr[i] > arr[k - 1]) c1++;
    }
    for(int i = k ; i < n ; i++) {
      if(arr[i] < arr[k - 1]) c2++;
    }
    cout << c1 << " " << c2 << endl;
}