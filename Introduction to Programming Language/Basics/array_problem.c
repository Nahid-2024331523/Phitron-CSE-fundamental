// insert value
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
//     for(i=n ; i>in ; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[in]=num;
//     for(i=0 ; i<n+1 ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//delelte value
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
//     int in;
//     scanf("%d",&in);
//     for(i=in ; i<n ; i++){
//         arr[i]=arr[i+1];
//     }
//     for(i=0 ; i<n-1 ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//reverse array with single iterator
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
//     int t;
//     for(i=0 ; i<n/2 ; i++){
//         t=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-i-1]=t;
//     }
//     for(i=0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//reverse array with two iterator
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
//     i=0;
//     int j=n-i-1;
//     int t;
//     while(i<j){
//         t=arr[i];
//         arr[i]=arr[j];
//         arr[j]=t;
//         i++;
//         j--;
//     }
//     for(i=0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }