#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string target="EGYPT";
    size_t i=0;
    while((i=s.find(target,i)) != string::npos){
        s.replace(i,5," ");
        i++;
    }
    cout<<s;
    return 0;
}