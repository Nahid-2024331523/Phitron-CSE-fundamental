#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    int mtr[r][c];
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            scanf("%d",&mtr[i][j]);
        }
    }
    if(c!=r){
        printf("NO");
    }
    else{
        int corner1=0;
        int other1=0;
        for(i=0 ; i<r ; i++){
            if(mtr[i][i]==1){
                corner1++;
            }
            for(j=0 ; j<c ; j++){    
                if(mtr[i][j]==0){
                    other1++;
                }
            }
        }
        int check=c*r;
        int count=0;
        if(r%2==0){
            if(corner1==r && other1==check-(r*2)){
                count++;
            }
        }
        else{
            if(corner1==r && other1==check-(r*2-1)){
                count++;
            }
        }
        int corner2=0;
        int other2=0;
        for(i=0 ; i<r ; i++){
            if(mtr[i][c-i-1]==1){
                corner2++;
            }
            for(j=0 ; j<c ; j++){    
                if(mtr[i][j]==0){
                    other2++;
                }
            }
        }
        if(r%2==0){
            if(corner2==r && other2==check-(r*2)){
                count++;
            }
        }
        else{
            if(corner2==r && other2==check-(r*2-1)){
                count++;
            }
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