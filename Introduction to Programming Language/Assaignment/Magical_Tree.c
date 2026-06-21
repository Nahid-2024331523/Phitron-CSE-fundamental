#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=6+((n-1)/2);
    int i,j;
    for(i=1 ; i<=m ; i++){
        for(j=1 ; j<=m-i ; j++){
            printf(" ");
        }
        for(j=1 ; j<=(2*i)-1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1 ; i<=5 ; i++){
        for(j=1 ; j<=5 ; j++){
            printf(" ");
        }
        for(j=1 ; j<=n ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}