//Array of structures
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //for malloc
struct student
{
    //char *name;
    char name[20];
    int roll;
    float marks;

};
int main()
{
    struct student s[2];

    // Allocate memory for each name
    //if we use pointer for name
    // for (int i = 0; i < 2; i++) {
    //     s[i].name = (char *)malloc(20 * sizeof(char));  // Allocate 100 bytes
    // }

    printf("Enter the details of student\n");
    for(int i=0; i<2;i++)
    {
        scanf("%s %d %f",s[i].name, &s[i].roll, &s[i].marks);
    }

    //Display
    for(int i=0; i<2;i++)
    {
        printf("%s %d %.2f \n",s[i].name, s[i].roll, s[i].marks);
    }
    
    return 0;
}