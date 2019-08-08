#include<stdio.h>
#include<conio.h>
void main()
{
    struct student
    {
        int id,age,marks;
    };
    int i;
    struct student st[10];
    for(i=0;i<10<i++)
    {
      printf("Enter the details of the student %d",i+1);  
      scanf("%d,%d,%d",&st[i].id,&st[i].age,&st[i].,marks);
      if(st[i].age>20 && st[i].marks>=0 && st[i].marks<=100)
     { 
       printf("student details are valid\n");
       if(st[i].marks>=65)
       printf("student is eligible for admission");
       else
       printf("student is not eligible for admission");
     }
      else
      printf("student details");
    }
    getch();
}