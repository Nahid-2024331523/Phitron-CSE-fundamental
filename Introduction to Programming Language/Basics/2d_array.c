//2d Array Input Output
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             printf("%d ",mtr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Specific Row
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int sr;
//     scanf("%d",&sr);
//     for(j=0 ; j<c ; j++){
//         printf("%d ",mtr[sr][j]);
//     }
//     return 0;
// }



// Specific Column
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int sc;
//     scanf("%d",&sc);
//     for(i=0 ; i<r ; i++){
//         printf("%d\n",mtr[i][sc]);
//     }
//     return 0;
// }




//Zero Matrix Check
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     int count=0;
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             if(mtr[i][j]==0){
//                 count++;
//             }
//         }
//     }
//     if(count==r*c){
//         printf("this is a zero matrix");
//     }
//     else{
//         printf("this is not a zero matrix");
//     }
//     return 0;
// }



//Primary Diagonal Matrix Check
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     if(c!=r){
//         printf("not a primary diagonal matrix");
//     }
//     else{
//         int corner=0;
//         int other=0;
//         for(i=0 ; i<r ; i++){
//             if(mtr[i][i]!=0){
//                 corner++;
//             }
//             for(j=0 ; j<c ; j++){    
//                 if(mtr[i][j]==0){
//                     other++;
//                 }
//             }
//         }
//         int check=c*r;
//         if(corner==r && other==check-r){
//             printf("primary diagonal matrix");
//         }
//         else{
//             printf("not a primary diagonal matrix");
//         }
//     }
//     return 0;
// }



//Secondary Diagonal Matrix Check
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int i,j;
//     int mtr[r][c];
//     for(i=0 ; i<r ; i++){
//         for(j=0 ; j<c ; j++){
//             scanf("%d",&mtr[i][j]);
//         }
//     }
//     if(c!=r){
//         printf("not a primary diagonal matrix");
//     }
//     else{
//         int corner=0;
//         int other=0;
//         for(i=0 ; i<r ; i++){
//             if(mtr[i][c-i-1]!=0){
//                 corner++;
//             }
//             for(j=0 ; j<c ; j++){    
//                 if(mtr[i][j]==0){
//                     other++;
//                 }
//             }
//         }
//         int check=c*r;
//         if(corner==r && other==check-r){
//             printf("secondary diagonal matrix");
//         }
//         else{
//             printf("not a secondary diagonal matrix");
//         }
//     }
//     return 0;
// }



// Matrix Summation
// #include<stdio.h>
// int main()
// {
//     int r1,c1;
//     scanf("%d %d",&r1,&c1);
//     int i,j;
//     int mtr1[r1][c1];
//     for(i=0 ; i<r1 ; i++){
//         for(j=0 ; j<c1 ; j++){
//             scanf("%d",&mtr1[i][j]);
//         }
//     }
//     int r2,c2;
//     scanf("%d %d",&r2,&c2);
//     int mtr2[r2][c2];
//     for(i=0 ; i<r2; i++){
//         for(j=0 ; j<c2 ; j++){
//             scanf("%d",&mtr2[i][j]);
//         }
//     }
//     int r=r1,c=c1;
//     int mtr[r][c];
//     if(c1!=c2 || r1!=r2){
//         printf("sum is not possible");
//     }
//     else{
//         for(i=0 ; i<r1 ; i++){
//             for(j=0 ; j<c1 ; j++){
//                 mtr[i][j]=mtr1[i][j]+mtr2[i][j];
//             }
//         }
//         printf("\n");
//         for(i=0 ; i<r ; i++){
//             for(j=0 ; j<c ; j++){
//                 printf("%d ",mtr[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }



//Matrix Subtraction
// #include<stdio.h>
// int main()
// {
//     int r1,c1;
//     scanf("%d %d",&r1,&c1);
//     int i,j;
//     int mtr1[r1][c1];
//     for(i=0 ; i<r1 ; i++){
//         for(j=0 ; j<c1 ; j++){
//             scanf("%d",&mtr1[i][j]);
//         }
//     }
//     int r2,c2;
//     scanf("%d %d",&r2,&c2);
//     int mtr2[r2][c2];
//     for(i=0 ; i<r2; i++){
//         for(j=0 ; j<c2 ; j++){
//             scanf("%d",&mtr2[i][j]);
//         }
//     }
//     int r=r1,c=c1;
//     int mtr[r][c];
//     if(c1!=c2 || r1!=r2){
//         printf("subtraction is not possible");
//     }
//     else{
//         for(i=0 ; i<r1 ; i++){
//             for(j=0 ; j<c1 ; j++){
//                 mtr[i][j]=mtr1[i][j]-mtr2[i][j];
//             }
//         }
//         printf("\n");
//         for(i=0 ; i<r ; i++){
//             for(j=0 ; j<c ; j++){
//                 printf("%d ",mtr[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }



//Matrix Multiplication(Unfinished)
// #include<stdio.h>
// int main()
// {
//     int r1,c1;
//     scanf("%d %d",&r1,&c1);
//     int i,j;
//     int mtr1[r1][c1];
//     for(i=0 ; i<r1 ; i++){
//         for(j=0 ; j<c1 ; j++){
//             scanf("%d",&mtr1[i][j]);
//         }
//     }
//     int r2,c2;
//     scanf("%d %d",&r2,&c2);
//     int mtr2[r2][c2];
//     for(i=0 ; i<r2; i++){
//         for(j=0 ; j<c2 ; j++){
//             scanf("%d",&mtr2[i][j]);
//         }
//     }
//     int r=r1,c=c2;
//     int mtr[r][c];
//     if(c1!=r2){
//         printf("multiplication is not possible");
//     }
//     else{
//         int sum;
//         for(i=0 ; i<r ; i++){
//             sum=mtr1[i][j]*mtr2[j][i];
//         }
//         printf("\n");
//     //     for(i=0 ; i<r ; i++){
//     //         for(j=0 ; j<c ; j++){
//     //             printf("%d ",mtr[i][j]);
//     //         }
//     //         printf("\n");
//     //     }
//         printf("%d",sum);
//     }
//     return 0;
// }