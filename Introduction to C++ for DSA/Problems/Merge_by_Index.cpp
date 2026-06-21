#include<stdio.h>
int main()
{
    char s1[1001],s2[1001];
    int n,m;
    scanf("%s %s %d %d",s1,s2,&n,&m);
    printf("%s",s1);
    for(int i=n ; i<=m ; i++){
        printf("%c",s2[i]);
    }
    return 0;
}