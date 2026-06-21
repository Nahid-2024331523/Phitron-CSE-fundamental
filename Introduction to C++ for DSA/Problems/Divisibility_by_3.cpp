#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int n;
    scanf("%d",&n);
    int count=0;
    while(n>0){
        int ld=n%10;
        count+=ld;
        n/=10;
    }
    if(count%3==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}