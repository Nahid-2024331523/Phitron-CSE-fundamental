#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        long long int p=a*b*c;
        if(n%p==0){
            printf("%lld",n/p);
        }
        else{
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}