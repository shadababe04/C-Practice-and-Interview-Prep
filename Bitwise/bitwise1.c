//SET/CLEAR/TOGGELE/CHECK

#include<stdio.h>
int clearBit(int num,int bit)
{   
    num &= ~(1<<bit);
    return num;
}

int setBit(int num, int bit)
{
    num |= (1<<bit);
    return num;
}

int toggleBit(int num , int bit)
{
    num ^=(1<<bit);
    return num;
}
int main()
{
    int num = 5; // 0x0000 0101
    int bit =1;
     printf("%d\n",setBit(num,bit));
    printf("%d\n",clearBit(num,bit));
    printf("%d\n",toggleBit(num,bit));

    return 0;
}