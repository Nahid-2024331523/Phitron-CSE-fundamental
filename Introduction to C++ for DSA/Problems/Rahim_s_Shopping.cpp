#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int arr[n];
    int i;
    for(i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int ans=-1;
    for(i=0 ; i<n ; i++){
        if(arr[i]>ans && arr[i]<=k){
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}