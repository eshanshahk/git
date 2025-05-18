#include <stdio.h>

struct school
{
    int rollno;
    char name[20];
    int dob;
};

int main()
{
    int i;
    
    printf("enter n no of students");
    
    scanf("%d", &i);
    struct school s[i];
    
    for (int n = 0; n < i; n++)
    {
        printf("Enter name");
        scanf("%s", s[n].name);
        
        printf("Enter rollno");
        scanf("%d", &s[n].rollno);
        
        printf("Enter dob");
        scanf("%d", &s[n].dob);
        
    }
    
    for (int n = 0; n < i; n++)
    {
        printf("Name = %s \t Rollno = %d \t Dob = %d  \n", s[n].name, s[n].rollno, s[n].dob);
    }
    return 0;
}
