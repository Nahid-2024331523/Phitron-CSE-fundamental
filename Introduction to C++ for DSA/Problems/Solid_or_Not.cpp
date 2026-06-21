#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==0 || n==1){
            cout<<"NO"<<endl;
        }
        else{
            int count=0;
            for(int i=2 ; i*i<=n ; i++){
                if(n%i==0){
                    count=1;
                    break;
                }
            }
            if(count==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}