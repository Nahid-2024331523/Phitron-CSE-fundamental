// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     if(n<3){
//         for(int i=1 ; i<=n ; i++){
//             cout<<i<<" ";
//         }
//     }
//     else{
//         if(n%2!=0){
//             for(int i=n,j=1 ; i>=n/2+2 ; i--,j++){
//                 cout<<j<<" "<<i<<" ";
//             }
//             cout<<n/2+1;
//         }
//         else{
//             for(int i=1,j=n ; i<=n/2 ; i++,j--){
//                 cout<<i<<" "<<j<<" ";
//             }
//         }
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int s=1,l=n;
//     for(int i=1 ; i<=n ; i++){
//         if(i%2!=0){
//             cout<<s<<" ";
//             s++;
//         }
//         else if(i%2==0){
//             cout<<l<<" ";
//             l--;
//         }
//     }
//     return 0;
// }