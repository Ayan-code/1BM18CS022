#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
     int id,age,marks;
    };
    struct student s;
    clrscr();
    printf("Enter id,age and marks of the student");
    scanf("%d%d%d",&s.id,&s.age,&s.marks);
    if(s.age>20 && s.marks>=0 && s.marks <=100)
    {
     printf("student details are valid\n");
     if(s.marks>=65)
     printf("student is eligible for admission");
     else
     printf("student is not eligible for admission");
    }
    else
    printf("student details are not valid");
    getch();
}