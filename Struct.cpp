#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct student {
        char name[100];
        int score;
    };
typedef struct student Student;

void Mysort (Student a[3], int n)
{

    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a [i].score > a[j].score)
            {
                student tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    Student a[3];
    for (int i=0; i<3; i++)
    {
        printf ("Student %d name ",i+1);
        scanf ("%s",a[i].name);fflush(stdin);
        printf ("Score: ");
        scanf ("%d",&a[i].score);fflush(stdin);
    }
    Mysort (a,3);
    printf ("list of student: \n");
    for (int i=0; i<3; i++)
    {
        printf ("Student: %s\n",a[i].name);
        printf ("Score: %d\n",a[i].score);
    }
    return 0;
}

