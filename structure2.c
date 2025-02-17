#include <stdio.h>
struct student
{
    int r_no;
    char name[20];
    float mark[3];
};
int main()
{
    int n;
    printf("Enter number of students \n");
    scanf("%d", &n);
    struct student s[n];
    int i,j;
    float sum[n], avg[n];
    
    for (i = 0; i < n; i++)
    {
        sum[i]=0;
        printf("Enter your name & roll no \n");
        scanf("%s %d", s[i].name, &s[i].r_no);
        for (j = 0; j < 3; j++)
        {
         printf("Enter marks");
         scanf("%f", &s[i].mark[j]);
         sum[i]=sum[i]+s[i].mark[j];
        }
        avg[i]=sum[i]/3;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n Name =%s \t Rollno=%d \t Mark=%f \t %f \t %f \t Total mark=%f \t Avg mark=%f ",s[i].name,s[i].r_no,s[i].mark[0],s[i].mark[1],s[i].mark[2],sum[i],avg[i]);
    }
    return 0;
}