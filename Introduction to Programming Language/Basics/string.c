// full string display without loop
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     scanf("%s",&s);               //scanf only take single word
//     printf("%s",s);
//     return 0;
// }



//full string display with space(gets)
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     gets(s);
//     printf("%s",s);
//     return 0;
// }



//full string display with space(fgets)
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     fgets(s,sizeof(s),stdin);
//     printf("%s",s);
//     return 0;
// }



//lentgh count(gets)
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     gets(s);
//     int count=0;
//     for(int i=0 ; s[i]!='\0' ; i++){
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }



//lentgh count(fgets)
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     fgets(s,100,stdin);                //with fgets input=hello
//     int count=0;                       //store=hello'\n''\0.
//     for(int i=0 ; s[i]!='\n' ; i++){
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }



//lenght count library function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     gets(s);
//     int count=strlen(s);
//     printf("%d",count);
//     return 0;
// }



//lenght count library function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     fgets(s,100,stdin);
//     int count=strlen(s);
//     printf("%d",count-1);
//     return 0;
// }



// copy string without library function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",&a,&b);
//     int n=strlen(b);
//     int i=0;
//     for(i=0 ; i<=n ; i++){
//         a[i]=b[i];
//     }
//     printf("%s %s",a,b);
//     return 0;
// }



//copy string with library function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",&a,&b);
//     strcpy(a,b);
//     printf("%s %s",a,b);
//     return 0;
// }



//concat string without library
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",&a,&b);
//     int n=strlen(a);
//     int m=strlen(b);
//     int i;
//     for(i=0 ; i<=m ; i++){
//         a[i+n]=b[i];
//     }
//     printf("%s",a);
//     return 0;
// }



//concat string with library
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",&a,&b);
//     strcat(a,b);
//     printf("%s",a);
//     return 0;
// }



//string compare using return 0
// #include<stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(a[i]!='\0' || b[i]!='\0'){
//         if(a[i]<b[i]){
//             printf("%s is smaller",a);
//             return 0;
//         }
//         else if(a[i]>b[i]){
//             printf("%s is smaller",b);
//             return 0;
//         }
//         else if(a[i]=='\0' && b[i]!='\0'){
//             printf("%s is smaller",a);
//             return 0;
//         }
//         else if(b[i]=='\0' && a[i]!='\0'){
//             printf("%s is smaller",b);
//             return 0;
//         }
//         i++;
//     }
//      printf("strings are equal");
//     return 0;
// }



// string compare using while(1)
// #include<stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(1){
//         if(a[i]<b[i]){
//             printf("%s is smaller",a);
//             return 0;
//         }
//         else if(a[i]>b[i]){
//             printf("%s is smaller",b);
//             return 0;
//         }
//         else if(a[i]=='\0' && b[i]!='\0'){
//             printf("%s is smaller",a);
//             return 0;
//         }
//         else if(b[i]=='\0' && a[i]!='\0'){
//             printf("%s is smaller",b);
//             return 0;
//         }
//         else if(a[i]=='\0' && b[i]=='\0'){
//             printf("strings are equal");
//             return 0;
//         }
//         i++;
//     }
//     return 0;
// }



//string compare with library
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int n=strcmp(a,b);
//     if(n>0){
//         printf("%s",b);
//     }
//     else if(n<0){
//         printf("%s",a);
//     }
//     else{
//         printf("strings are same");
//     }
//     return 0;
// }