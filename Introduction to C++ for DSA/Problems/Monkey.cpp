#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int n=s.size();
        sort(s.begin(),s.end());
        for(int i=0 ; i<n ; i++){
            if(s[i]==' '){
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}