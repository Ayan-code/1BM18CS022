#include<stdio.h>
#include<conio.h>
struct student
{
 int id,age,marks;
}
int validate(struct student s);
int qualify(struct student s);
int main()
{
    struct student st[10];
    int i,n;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("Enter id,age,marks of student %d",i+1);
      scanf("%d%d%d",&st[i].id,&st[i].age,&st[i].marks);
      if(qualify(st[i]))
      {
        printf("student %d is eligible for admission");
        else
        printf("student %d is not eligible for admission",i+1);
      }
    }
    return 0;
}

int validate(struct student s)
{
    if(s.age>20 && s.marks>=0 && s.marks<=0)
    return 1;
    else
    return 0;
}

int qualify(struct student s)
{
    if(validate(s))
    {
        if(s.marks>=65)
        return 1;
        else 
        return 0;
    }
    else
    printf("details not valid");   
}