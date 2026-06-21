#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--) 
    {
        string s; cin >> s;
        map <int , int> freq;
        for(int i = 0 ; i < (int)s.size() ; i++) {
            freq[s[i] - '0']++;
        }
        int count = 0;
        vector <int> res;
        for(auto i : freq) {
        res.push_back(i.second);
        }
        for(int i = 1 ; i < (int)res.size() ; i++) {
            cout << res[i] << " ";
            if(res[i] % 2 == 1) count++;
        }
        cout << count << endl;
    }
}