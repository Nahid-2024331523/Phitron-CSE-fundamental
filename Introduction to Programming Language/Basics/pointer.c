// #include<stdio.h>
// int main()
// {
//     int x=26;
//     int *ptr=&x;
//     int **pptr=&ptr;
//     printf("%d\n",x);         //value of x
//     printf("%d\n",&x);        //nothing
//     printf("%p\n",&x);        //address of x
//     printf("%d\n",ptr);       //nothing
//     printf("%p\n",ptr);       //address of x
//     printf("%d\n",*ptr);      //value of x
//     printf("%p\n",&ptr);      //address of ptr
//     printf("%p\n",*ptr);      //nothing
//     printf("%d\n",pptr);      //nothing
//     printf("%p\n",pptr);      //address of ptr
//     printf("%p\n",*pptr);     //address of x
//     printf("%d\n",*pptr);     //nothing
//     printf("%d\n",**pptr);    //value of x
//     printf("%p\n",**pptr);    //noting
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int x=10;
//     printf("%d\n",x);
//     int *ptr=&x;
//     *ptr=20;
//     printf("%d",x);
//     return 0;
// }



//Pass by Value
// #include<stdio.h>
// int value(int x)
// {
//     x=20;
// }
// int main()
// {
//     int x=10;
//     printf("%d\n",x);
//     value(x);
//     printf("%d",x);
//     return 0;
// }



//Pass by Reference
// #include<stdio.h>
// int value(int *x)
// {
//     *x=20;
// }
// int main()
// {
//     int x=10;
//     printf("%d\n",x);
//     value(&x);
//     printf("%d",x);
//     return 0;
// }



//Pointer in Araay
// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     *arr=10;                     //0th index
//     *(arr+1)=20;                 //1st index
//     *(arr+2)=30;                 //2nd index
//     *(arr+3)=40;                 //3rd index
//     *(arr+4)=50;                 //4th index
//     for(int i=0 ; i<5 ; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



