#include<stdio.h>
#include<string.h>

 struct Student
{
    int rollno;
    char name[10];
    int marks;
};


int main(){
    struct Student s1,s2;

    s1.rollno=10;
    strcpy(s1.name,"Ajit");
    s1.marks=95;

    printf("Rollno = %d \nName = %s \nMarks = %d",s1.rollno,s1.name,s1.marks);

    printf("\nEnter student roll number :");
    scanf("%d",&s2.rollno);
 
    printf("Enter student Name :");
    scanf("%s",&s2.name);

    printf("Enter student marks :");
    scanf("%d",&s2.marks);

    printf("Rollno = %d \nName = %s \nMarks = %d",s2.rollno,s2.name,s2.marks);
    return 0;
     
}