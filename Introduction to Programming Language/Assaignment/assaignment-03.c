// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for(i=1 ; i<=n ; i++){
//         for(j=1 ; j<=n-i ; j++){
//             printf(" ");
//         }
//         if(i%2!=0){
//             for(j=1 ; j<=2*i-1 ; j++){
//                 printf("#");
//             }
//         }
//         else{
//             for(j=1 ; j<=2*i-1 ; j++){
//                 printf("-");
//             }
//         }
//         printf("\n");
//     }
//     for(i=1 ; i<n ; i++){
//         for(j=1 ; j<=i ; j++){
//             printf(" ");
//         }
//         if(n%2!=0){
//             if(i%2==0){
//                 for(j=1 ; j<=2*n-2*i-1 ; j++){
//                     printf("#");
//                 }
//             }
//             else{
//                 for(j=1 ; j<=2*n-2*i-1 ; j++){
//                     printf("-");
//                 }
//             }
//         }
//         else{
//             if(i%2==0){
//                 for(j=1 ; j<=2*n-2*i-1 ; j++){
//                     printf("-");
//                 }
//             }
//             else{
//                 for(j=1 ; j<=2*n-2*i-1 ; j++){
//                     printf("#");
//                 }
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
//         int num=i;
//         for(j=1 ; j<=i ; j++){
//             printf("%d",num);
//             num--;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int count_before_one(int x)
// {
//     if(x==1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
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
//     int ans=0;
//     for(i=0 ; i<n ; i++){
//         int count=count_before_one(arr[i]);
//         if(count==1){
//             ans++;
//         }
//         else{
//             break;
//         }
//     }
//     printf("%d",ans);
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char s[])
// {
//     int i;
//     int n=strlen(s);
//     int count=1;
//     for(i=0 ; i<n/2 ; i++){
//         if(s[i]!=s[n-i-1]){
//             count=0;
//             break;
//         }
//     }
//     return count;
// }
// int main()
// {
//     char s[1001];
//     scanf("%s",s);
//     int ans=is_palindrome(s);
//     if(ans==0){
//         printf("Not Palindrome");
//     }
//     else{
//         printf("Palindrome");
//     }
//     return 0;
// }



// #include<stdio.h>
// void odd_even()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int even=0,odd=0;
//     for(i=0 ; i<n ; i++){
//         if(arr[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     printf("%d %d",even,odd);
// }
// int main()
// {
//     odd_even();
//     return 0;
// }