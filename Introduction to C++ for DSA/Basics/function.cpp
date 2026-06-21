// //min Funcion
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     cout<<min(50,16)<<endl;
//     cout<<min({5,51,8,3,4});
//     return 0;
// }



// //max Funcion
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     cout<<max(50,16)<<endl;
//     cout<<max({5,51,8,3,4});
//     return 0;
// }



// //swap Funcion
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int a,b; cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
//     return 0;
// }



// //Array Sort(Ascending)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     for(i=0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// //Array Sort(Descending)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     sort(a,a+n,greater<int>());
//     for(i=0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// //Min Value in Array
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     int mn=*min_element(a,a+n);
//     cout<<mn;
//     return 0;
// }



// //Max Value in Array
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     int mx=*max_element(a,a+n);
//     cout<<mx;
//     return 0;
// }



// //Swap Two Value
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     swap(arr[1],arr[3]);
//     for(int i=0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// //Min & Max Value Swap
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int min_idx = min_element(arr, arr + n) - arr;
//     int max_idx = max_element(arr, arr + n) - arr;
//     swap(arr[min_idx], arr[max_idx]);
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



// //String Sort(Single Word)
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }



// //String Sort(Full String)
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     sort(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }



// //String Sort(Full String & skipping the spaces)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     s.erase(remove(s.begin(), s.end(), ' '), s.end());
//     sort(s.begin(), s.end());
//     cout << s;
//     return 0;
// }



//array reverse
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     reverse(a,a+n);
//     for(i=0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// //replace substring by a character
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string target="EGYPT";
//     size_t i=0;
//     while((i=s.find(target,i)) != string::npos){
//         s.replace(i,5," ");
//         i++;
//     }
//     cout<<s;
//     return 0;
// }