//Printing 1 to n
// #include<stdio.h>
// int print(int n , int i)
// {
//     if(i==n+1){
//         return;
//     }
//     printf("%d ",i);
//     print(n,i+1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i=1;
//     print(n,i);
//     return 0;
// }



//Printing n to 1
// #include<stdio.h>
// int print(int n , int i)
// {
//     if(i==0){
//         return;
//     }
//     printf("%d ",i);
//     print(n,i-1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i=n;
//     print(n,i);
//     return 0;
// }



//Printing n to 1
// #include<stdio.h>
// int print(int n , int i)
// {
//     if(i==n+1){
//         return;
//     }
//     print(n,i+1);
//     printf("%d ",i);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i=1;
//     print(n,i);
//     return 0;
// }



//Printing Array
// #include<stdio.h>
// int array(int a[] ,int n ,int i)
// {
//     if(i==n){
//         return;
//     }
//     printf("%d ",a[i]);
//     array(a ,n ,i+1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     array(arr,n,0);
//     return 0;
// }



//Reverse Array
// #include<stdio.h>
// int array(int a[] ,int n ,int i)
// {
//     if(i==n){
//         return;
//     }
//     array(a ,n ,i+1);
//     printf("%d ",a[i]);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     array(arr,n,0);
//     return 0;
// }



//Reverse Array
// #include<stdio.h>
// int array(int a[] ,int n ,int i)
// {
//     if(i<0){
//         return;
//     }
//     printf("%d ",a[i]);
//     array(a ,n ,i-1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     array(arr,n,n-1);
//     return 0;
// }