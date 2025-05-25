#include<stdio.h>

int myAdd(int a, int b)
{
    return a+b;
}

int mySub(int a, int b)
{
    return a-b;
}

int myMul(int a, int b)
{
    return a*b;
}

int myDiv(int a, int b)
{
    return a/b;
}

int main()
{
    //int (*fnptr)(int, int) = myAdd;

    //int (*fnptr[])(int, int) = {myAdd,mySub,myDiv,myMul};
    typedef int(*fnptr)(int, int) ;
    fnptr fptr[]={myAdd,mySub,myDiv,myMul};
    printf("ADD:%d\n",fptr[0](4,5));
    printf("SUB:%d\n",fptr[1](4,5));
    printf("DIV:%d\n",fptr[2](4,5));
    printf("MUL:%d\n",fptr[3](4,5));
    return 0;
}