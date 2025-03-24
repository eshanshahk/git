#include <iostream>
#include <string>
using namespace std;

class college
{
public:
    string college_name;
    string location;
};

int main()
{
    college s[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%s", s[i].college_name);
        scanf("%s", s[i].location);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\n%s", s[i].college_name);
        printf("\n%s", s[i].location);
    }
    return 0;
}