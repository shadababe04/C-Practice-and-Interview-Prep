//pointer to structure
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student s1={"shadab",1,435};
    struct student *ptr;
    ptr = &s1;
    printf("%s %d %.2f",ptr->name,ptr->rollno,ptr->marks);    
    return 0;
}