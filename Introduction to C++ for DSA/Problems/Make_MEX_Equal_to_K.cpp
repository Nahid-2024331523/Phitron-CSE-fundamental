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
    int k; cin>>k;
    sort(a,a+n);
    int mex=0;
    int count=0;
    start :
    for(i=0 ; i<n ; i++){
        if(mex==a[i]){
            mex++;
        }
    }
    if(mex>k){
        cout<<-1;
    }
    else if(mex==k){
        cout<<count;
    }
    else{
        count++;
        mex++;
        goto start;
    }
    return 0;
}