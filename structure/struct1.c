//Program to display the member
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int rollno;
    float marks;
};


int main()
{
    struct student s2,s3;
    struct student s1={"shadab",2,435}; //only at the time of declaration 
    strcpy(s2.name,"shabnam");
    s2.rollno = 1;
    s2.marks = 500;
    printf("Enter the name , rollno, marks");
    scanf("%s %d %f",s3.name, & s3.rollno, &s3.marks);
    printf("s1 : %s  %d  %.2f\n",s1.name,s1.rollno,s1.marks);
    printf("s2 : %s  %d  %.2f\n",s2.name,s2.rollno,s2.marks);
    printf("s3 : %s  %d  %.2f\n",s3.name,s3.rollno,s3.marks);


    return 0;
}