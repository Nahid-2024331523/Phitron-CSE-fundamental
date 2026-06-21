#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0 ; i<n ; i++){
            scanf("%d",&a[i]);
        }
        int b[n],c[n];
        for(i=0 ; i<n ; i++){
            b[i]=a[i];
        }
        int j;
        for(i=0 ; i<n-1 ; i++){
            for(j=i+1 ; j<n ; j++){
                if(b[i]>b[j]){
                    int t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
            }
        }
        for(i=0 ; i<n ; i++){
            c[i]=a[i]-b[i];
        }
        for(i=0 ; i<n ; i++){
            printf("%d ",abs(c[i]));
        }
        printf("\n");
    }
    return 0;
}