//TODO
//Write a function in C to rotate an array to the left by d positions

#include<stdio.h>

void rotatebyone(int arr[], int sze)
{
    int temp = arr[0];
    for(int i=0; i<sze-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[sze-1]=temp;
}

void leftRotateRecursive(int arr[], int size, int d) {
    if (d <= 0) return;  //base case
    rotatebyone(arr, size);
    leftRotateRecursive(arr, size, d - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int temp =0;
    int sze = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", sze);
    for(int i=0 ; i<sze;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    leftRotateRecursive(arr,sze,2);

    printArray(arr,sze);

    return 0;
}