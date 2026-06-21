// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int n;
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++){
//         for(j=1 ; j<=i ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int n;
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++){
//         for(j=1 ; j<=n-i+1 ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for(i=1 ; i<=n ; i++){
//         for(j=n-i ; j>0 ; j--){
//             printf("  ");
//         }
//         int num=1;
//         for(j=1 ; j<=i ; j++){
//             printf("%d   ",num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for(i=1 ; i<=2*n-1 ; i++){
//         for(j=2*n-i ; j>0 ; j--){
//             printf("  ");
//         }
//         for(j=1 ; j<=i ; j++){
//             if(i%2!=0){
//                 printf("*   ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for(i=1 ; i<=n ; i++){
//         for(j=n-i ; j>0 ; j--){
//             printf(" ");
//         }
//         int num=1;
//         for(j=1 ; j<=i ; j++){
//             printf("%d",num);
//             num++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Sum of Two Numbers Equal Target
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     int arr[n];
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int target;
//     scanf("%d",&target);
//     for(i=0 ; i<n-1 ; i++){
//         for(j=i+1 ; j<n ; j++){
//             if(arr[i]+arr[j]==target){
//                 printf("%d %d\n",arr[i],arr[j]);
//             }
//         }
//     }
//     return 0;
// }


//Selection Sort(Ascending)
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     int arr[n];
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0 ; i<n-1 ; i++){
//         for(j=i+1 ; j<n ; j++){
//             if(arr[i]>arr[j]){
//                 int t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     for(i=0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//Selection Sort(Descending)
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     int arr[n];
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=n-1 ; i>0 ; i--){
//         for(j=i-1 ; j>=0 ; j--){
//             if(arr[i]>arr[j]){
//                 int t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     for(i=0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



