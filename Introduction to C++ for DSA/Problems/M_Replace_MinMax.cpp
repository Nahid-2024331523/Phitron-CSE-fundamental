#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int i=0;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int mn=0;
    int mx=0;
    for(i=1 ; i<n ; i++){
        if(a[i]<a[mn]){
            mn=i;
        }
        if(a[i]>a[mx]){
            mx=i;
        }
    }
    int t=a[mn];
    a[mn]=a[mx];
    a[mx]=t;
    for(i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}