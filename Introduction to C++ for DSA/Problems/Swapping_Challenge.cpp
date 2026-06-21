#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int i,j;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int then;
    for(i=0 ; i<n ; i++){
        int count=0;
        for(j=0 ; j<n ; j++){
            if(a[i]>a[j]){
                count++;
            }
        }
        if(count==n/2){
            then=i;
            break;
        }
    }
    sort(a,a+n);
    cout<<abs(n/2-then);
    return 0;
}
