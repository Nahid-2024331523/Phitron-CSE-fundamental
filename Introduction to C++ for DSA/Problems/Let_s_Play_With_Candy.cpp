#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int i;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int ans=0;
    for(i=0 ; i<n ; i++){
        if(ans==a[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}