// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int tw=0,th=0;
//     for(i=0 ; i<n ; i++){
//         if(arr[i]%2==0){
//             tw++;
//         }
//         else if(arr[i]%3==0){
//             th++;
//         }
//     }
//     printf("%d %d",tw,th);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char s[100001];
//     scanf("%s",s);
//     int count=0;
//     for(int i=0 ; s[i]!='\0' ; i++){
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
//             continue;;
//         }
//         else{
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int m1,m2,d;
//         scanf("%d %d %d",&m1,&m2,&d);
//         int rem=d-((m1*d)/(m1+m2));
//         printf("%d\n",rem);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         char s[10001];
//         scanf("%s",s);
//         int cap=0,sma=0,num=0;
//         for(int i=0 ; s[i]!='\0' ; i++){
//             if(s[i]>='a' && s[i]<='z'){
//                 sma++;
//             }
//             else if(s[i]>='A' && s[i]<='Z'){
//                 cap++;
//             }
//             else if(s[i]>='0' && s[i]<='9'){
//                 num++;
//             }
//         }
//         printf("%d %d %d\n",cap,sma,num);
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[10001];
//     scanf("%s",s);
//     int n=strlen(s);
//     int i;
//     int fre[26];
//     for(i=0 ; i<10 ; i++){
//         fre[i]=0;
//     }
//     for(i=0 ; i<n ; i++){
//         int x=s[i];
//         fre[x-97]++;
//     }
//     for(i=0 ; i<26 ; i++){
//         if(fre[i]==0){
//             continue;
//         }
//         else{
//             printf("%c - %d\n",i+97,fre[i]);
//         }
//     }
//     return 0;
// }