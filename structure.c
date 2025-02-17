#include <stdio.h>
struct student
{
    int r_no;
    char name[20];
    float mark[3];
};
int main()
{
    struct student s;
    int i;
    float sum=0,avg=0;
    printf("Enter your name & roll no \n");
    scanf("%s %d", s.name, &s.r_no);
    printf("Enter your marks \n");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &s.mark[i]);
    }
    for (i = 0; i < 3; i++)
    {
        sum = sum + s.mark[i];
    }
        avg=sum/3;
    printf("Student Details are : \n");
    printf("Name =%s \t Rollno=%d \t Total Mark=%f \t Avg Mark=%f",s.name,s.r_no,sum),avg;
    return 0;
}