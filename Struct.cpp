#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct student {
        char name[100];
        int score;
    };
typedef struct student Student;

void Mysort (Student[],int n);

void Mysort (Student[], int n)
{
    
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (Student [i].score > Student[j].score)
            {
                Studenttmp = Student[i].score;
                Student[i].score = Student[j].score;
                Student[j].score = Studenttmp;
            }
        }
    }
}
int main()
{
    Student Student[3];
    for (int i=0; i<3; i++)
    {
        printf ("Student %d name ",i+1);
        scanf ("%s",Student[i].name);
        printf ("Score: ");
        scanf ("%d",&Student[i].score);
    }
    Mysort (Student,3);
    printf ("list of student: \n");
    for (int i=0; i<3; i++)
    {
        printf ("Student: %s\n",Student[i].name);
        printf ("Score: %d\n",Student[i].score);
    }
    return 0;
}

