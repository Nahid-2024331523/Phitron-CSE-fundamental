//Fix Password
// #include<stdio.h>
// int main()
// {
//     int pass;
//     while (scanf("%d",&pass)){
//         if(pass==1999){
//             printf("Correct");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }



//Finding Maximum Number
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ans=0;
//     for(int i=1 ; i<=n ; i++){
//         int x;
//         scanf("%d",&x);
//         if(x>ans){
//             ans=x;
//         }
//     }
//     printf("%d",ans);
//     return 0;
// }



// Reverse Number Include 0
// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         do{
//             int ld=n%10;
//             printf("%d ",ld);
//             n/=10;
//         }while(n>0);
//         printf("\n");
//     }
//     return 0;
// }



//Replace Min Max
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
//     int min=__INT32_MAX__;
//     int max=-__INT32_MAX__;
//     int in1,in2;
//     for(i=0 ; i<n ; i++){
//         if(arr[i]>max){
//             max=arr[i];
//             in2=i;
//         }
//         if(arr[i]<min){
//             min=arr[i];
//             in1=i;
//         }
//     }
//     int t=arr[in1];
//     arr[in1]=arr[in2];
//     arr[in2]=t;
//     for(i=0 ; i<n ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//Palindrome Array
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
//     int count=0;
//     int j;
//     for(i=0,j=n-i-1 ; i<j ; i++,j--){
//         if(arr[i]!=arr[j]){
//             count=1;
//             break;
//         }
//     }
//     if(count==1){
//         printf("NO");
//     }
//     else{
//         printf("YES");
//     }
//     return 0;
// }



//Smallest Pair
// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         int arr[n];
//         int i;
//         for(i=0 ; i<n ; i++){
//             scanf("%d",&arr[i]);
//         }
//         int min=__INT32_MAX__;
//         int sum=0;
//         int j;
//         for(i=0 ; i<n-1 ; i++){
//             for(j=i+1 ; j<n ; j++){
//                 sum=arr[i]+arr[j]+(j+1)-(i+1);
//                 if(sum<min){
//                     min=sum;
//                 }
//             }
//         }
//         printf("%d\n",min);
//     }
//     return 0;
// }



//sum of all digits in a asingle string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1000001];
//     scanf("%s",s);
//     int size=strlen(s);
//     int count=0;
//     for(int i=0 ; i<size ; i++){
//         count+=s[i];
//     }
//     printf("%d",count-(size*48));
//     return 0;
// }



//copying 2 array in a array
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr1[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr1[i]);
//     }
//     int m;
//     scanf("%d",&m);
//     int arr2[m];
//     for(i=0 ; i<m ; i++){
//         scanf("%d",&arr2[i]);
//     }

//     int arr[n+m];
//     for(i=0 ; i<n ; i++){
//         arr[i]=arr1[i];
//     }
//     for(i=0 ; i<m ; i++){
//         arr[i+n]=arr2[i];
//     }
//     for(i=0 ; i<n+m ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



//digit count
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char s[n+1];
//     scanf("%s",s);
//     int sum=0;
//     int i;
//     for(i=0 ; i<n ; i++){
//         sum+=s[i]-'0';
//     }
//     printf("%d",sum);
//     return 0;
// }



//love string
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         char a[100],b[100];
//         scanf("%s %s",a,b);
//         int A=strlen(a);
//         int B=strlen(b);
//         int i;
//         for(i=0 ; i<A && i<B ; i++){
//             printf("%c%c",a[i],b[i]);
//         }
//         if(i<A){
//             for( ; i<A ; i++){
//                 printf("%c",a[i]);
//             }
//         }
//         if(i<B){
//             for( ; i<B ; i++){
//                 printf("%c",b[i]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



//frequency array(1 to m)
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int m;
//     scanf("%d",&m);
//     int i;
//     int arr[n];
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int fre[m];
//     for(i=0 ; i<m ; i++){
//         fre[i]=0;
//     }
//     for(i=0 ; i<n ; i++){
//         if(arr[i]==0){
//             continue;
//         }
//         else{
//             int val=arr[i];
//             fre[val-1]++;
//         }
//     }
//     for(i=0 ; i<m ; i++){
//         printf("%d\n",fre[i]);
//     }
//     return 0;
// }



//frequency array(0 to 9){with continue}
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int i;
//     int arr[n];
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int fre[10];
//     for(i=0 ; i<10 ; i++){
//         fre[i]=0;
//     }
//     for(i=0 ; i<n ; i++){
//         int val=arr[i];
//         fre[val]++;
//     }
//     for(i=0 ; i<10 ; i++){
//         if(fre[i]==0){
//             continue;
//         }
//         else{
//             printf("%d - %d\n",i,fre[i]);
//         }
//     }
//     return 0;
// }



//Search In Matrix
// #include<stdio.h>
// int main()
// {
//     int r,c,i,j;
//     scanf("%d %d",&r,&c);
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int search;
//     scanf("%d",&search);
//     int count=0;
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             if(mtr[i][j]==search){
//                 count=1;
//                 break;
//             }
//         }
//     }
//     if(count==1){
//         printf("will not take number");
//     }
//     else{
//         printf("will take number");
//     }
//     return 0;
// }



//Difference(Primary and Secondary Digonal)
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,i,j;
//     scanf("%d",&n);
//     int mtr[n][n];
//     for(i=0 ; i<n ; i++){
//         for(j=0 ; j<n ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int sum1=0,sum2=0;
//     for(i=0 ; i<n ; i++){
//         sum1+=mtr[i][i];
//         sum2+=mtr[i][n-i-1];
//     }
//     int d=abs(sum1-sum2);
//     printf("%d",d);
//     return 0;
// }



//Minimize Array Until Odd Comes
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
//     int ans=0;
//     while(1){
//         int count=0;
//         for(i=0 ; i<n ; i++){
//             if(arr[i]%2==0){
//                 count++;
//                 arr[i]/=2;
//             }
//         }
//         if(count==n){
//             ans++;
//         }
//         else{
//             break;
//         }
//     }
//     printf("%d",ans);
//     return 0;
// }



//A Beautyful Matrix
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int r,c,i,j;
//     int mtr[5][5];
//     for(i=0 ; i<5 ; i++){
//         for(j=0 ; j<5 ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int count=0;
//     for(i=0 ; i<5 ; i++){
//         for(j=0 ; j<5 ; j++){
//             if(mtr[i][j]==1){
//                 count=1;
//                 r=i;
//                 c=j;
//                 break;
//             }
//         }
//     }
//     printf("%d",abs(2-r)+abs(2-c));
// }



//Mirror Matrix
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int mtr[r][c];
//     int i,j;
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     for(i=0 ; i<r ; i++){
//         for(j=c-1 ; j>=0 ; j--){
//             printf("%d ",mtr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//Print Digits by Recursion
// #include<stdio.h>
// void digit(int n)
// {
//     if(n==0){
//         return;
//     }
//     digit(n/10);
//     printf("%d ",n%10);
// }
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         if(n==0){
//             printf("0");
//         }
//         digit(n);
//         printf("\n");
//     }
//     return 0;
// }



//Vowel Count by Rcursion
// #include<stdio.h>
// int size(char s[] , int i)
// {
//     if(s[i]=='\n'){
//         return 0;
//     }
//     int count=size(s,i+1);
//     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
//         return count+1;
//     }
//     else{
//         return count;
//     }
// }
// int main()
// {
//     char s[201];
//     fgets(s,201,stdin);
//     int ans=size(s,0);
//     printf("%d",ans);
//     return 0;
// }



//Factorial
// #include<stdio.h>
// long long int factorial(int p)
// {
//     if(p==0){
//         return 0;
//     }
//     if(p==1){
//         return 1;
//     }
//     return p*factorial(p-1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%lld",factorial(n));
//     return 0;
// }



//Log2
// #include<stdio.h>
// int Log(int n)
// {
//     int count=0;
//     if(n==1){
//         return 1;
//     }
//     Log(n/2);
//     return count+1;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",Log(n));
//     return 0;
// }



//Lucky Divisible
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("YES");
    }
    else if(n%7==0){
        printf("YES");
    }
    else{
        int count=2;
        while(n>0){
            int ld=n%10;
            if(ld!=4 || ld!=7){
                count++;
                break;
            }
            n/=10;
        }
        if(count==2){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}