//post increment
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=x++;                    //use then increase
//     printf("%d %d",x,y);
//     return 0;
// }



//pre increment
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=++x;                    //increase then use
//     printf("%d %d",x,y);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=x++;
//     int z=++y;
//     printf("%d\n",z++);              //print then increase
//     printf("%d",z);                  //after increase
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int x=10;
//     ++x;
//     printf("%d",++x);                  //increase then print
//     return 0;
// }



//post decrement
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=x--;                    //use then decrease
//     printf("%d %d",x,y);
//     return 0;
// }



//pre decrement
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int y=--x;                      //decrease then use
//     printf("%d %d",x,y);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int x=10;
//     --x;
//     printf("%d\n",x--);                  //print then decrease
//     printf("%d",x);
//     return 0;
// }







#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    return 0;
}