#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int i;
    for(i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++){
        scanf("%d",&b[i]);
    }
    for(i=0 ; i<n ; i++){
        printf("%d ",a[i]+b[n-i-1]);
    }
    return 0;
}