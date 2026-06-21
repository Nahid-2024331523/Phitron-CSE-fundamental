// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *p=new int;
//     *p=100;
//     cout<<*p;
//     return 0;
// }



// //Memory Delete
// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun()
// {
//     int x=10;
//     p=&x;
//     cout<<"fun-> "<<*p<<endl;
//     return;
// }
// int main()
// {
//     fun();
//     cout<<"main-> "<<*p<<endl;    
//     return 0;
// }



// //Mwmory Delete Solve
// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun()
// {
//     int *x=new int;
//     *x=10;
//     p=x;
//     cout<<"fun-> "<<*p<<endl;
//     return;
// }
// int main()
// {
//     fun();
//     cout<<"main-> "<<*p<<endl;    
//     return 0;
// }



// //Dynamic Array
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int *a=new int[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i];
//     }
//     for(i=0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// //Dynamic Array(Function)
// #include<bits/stdc++.h>
// using namespace std;
// int* fun()
// {
//     int *a=new int[5];
//     for(int i=0 ; i<5 ; i++){
//         cin>>a[i];
//     }
//     return a;
// }
// int main()
// {
//     int *arr=fun();
//     for(int i=0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// //Dynamic Array Size Increase
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *a=new int[3];
//     for(int i=0 ; i<3 ; i++){
//         cin>>a[i];
//     }
//     int *b=new int[5];
//     for(int i=0 ; i<3 ; i++){
//         b[i]=a[i];
//     }
//     b[3]=40;
//     b[4]=50;
//     delete[] a;
//     for(int i=0 ; i<5 ; i++){
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }