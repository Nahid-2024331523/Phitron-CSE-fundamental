#include<stdio.h>
int  main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int m[r][c];
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(j=0 ; j<c ; j++){
        printf("%d ",m[r-1][j]);
    }
    printf("\n");
    for(i=0 ; i<r ; i++){
        printf("%d ",m[i][c-1]);
    }
    return 0;
}