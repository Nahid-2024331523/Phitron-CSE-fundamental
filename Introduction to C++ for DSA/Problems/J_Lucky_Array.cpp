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
    int mn=*min_element(a,a+n);
    int count=0;
    for(i=0 ; i<n ; i++){
        if(a[i]==mn){
            count++;
        }
    }
    if(count%2==0){
        cout<<"Unlucky";
    }
    else{
        cout<<"Lucky";
    }
    return 0;
}