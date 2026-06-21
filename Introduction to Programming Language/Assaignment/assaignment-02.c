// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         printf("%d. I Want More Assignments\n",i);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if(n>0){
//         for(int i=1 ; i<=n ; i++){
//             printf("%d ",i);
//         }
//     }
//     else{
//         for(int i=n ; i<=0 ; i++){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=n-1 ; i>=0 ; i--){
//         if(i%2!=0){
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int pos=0;
//     int neg=0;
//     for(i=0 ; i<n ; i++){
//         if(arr[i]>0){
//             pos+=arr[i];
//         }
//         else{
//             neg+=arr[i];
//         }
//     }
//     printf("%d %d",pos,neg);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int in,num;
//     scanf("%d %d",&in,&num);
//     for(i=0 ; i<n ; i++){
//         if(i==in){
//             arr[i]=num;
//         }
//     }
//     for(i=n-1 ; i>=0 ; i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }