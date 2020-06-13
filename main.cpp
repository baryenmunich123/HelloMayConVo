#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>// used for the system('cls') clear screen function
#define m 100
#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED



#endif // FUNCTION_H_INCLUDED

int check (int a[][m], int n, int i, int j);
void caro (int a[][m], int &n);
int checkwin (int a[][m], int n);
void output (int a[][m], int n, char p1, char p2);
int xo(int n);

int main()
{
    int a[m][m],n;
    caro(a,n);
}

int check (int a[][m], int n, int i, int j)
{
    int count=0;int b=a[i][j];// Gan 1 hoac 0 vao bien centr
    for (int k=1;k<=9;k++)    //Xet theo chieu ngang
        if (a[i][j+k]==b)
        {
            if(((a[i][j-1]==xo(b)) && (a[i][j+5]==xo(b))) || ((j-1<0) && (a[i][j+5]==xo(b))) || ((j+5>39) && (a[i][j-1]==xo(b))))
            {
                count=0;break;
            }
            else count++;
        }
        else
        {
        	if(k>5)
        	{
        		count=0;break;
			}
            else break;
        }
    if(count==4) return 1;
        else count=0;
    for (int k=1;k<=9;k++)    //Xet theo duong cheo song xong voi cheo chinh
        if (a[i+k][j+k]==b)
        {
            if((a[i-1][j-1]==xo(b) && a[i+5][j+5]==xo(b)) || ((i-1<0)||(j-1<0) && a[i+5][j+5]==xo(b)) || ((i+5 >39) || (j+5 >39) && (a[i-1][j-1]==xo(b))) )
            {
            	count = 0; break;
			}
            else count++;
        }
        else
        {
        	if(k>5)
        	{
        		count=0;break;
			}
            else break;
		}
	if (count==4) return 1;
	else count=0;
    for (int k=1;k<=9;k++)    //Xet theo chieu doc
        if (a[i+k][j]==b)
        {
        	if((a[i-1][j]==xo(b) && a[i+5][j]==xo(b) || (i-1<0 && a[i+5][j]==xo(b)) || (i+5>19 && a[i-1][j]==xo(b))))
        	{
        		count=0;break;
			}
			else count++;
		}
		else
		{
			if(k>5)
        	{
        		count=0;break;
			}
            else break;
		}
	if(count==4) return 1;
	else count=0;
    for (int k=1;k<=9;k++)    //Xet theo duong cheo song song song voi cheo phu
        if (a[i][j]==b)
		{
			if ((a[i-1][j+1]==xo(b) && a[i+5][j-5]==xo(b)) || ((i-1<0)||(j+1>39) && a[i+5][j-5]==xo(b)) || (((i+5>20) || (j-5<0) ) && a[i-1][j+1]==xo(b) ))
			{
				count=0;break;
			}
			else count++;
		}
		else
		{
			if(k>5)
        	{
        		count=0;break;
			}
            else break;
		}
	if(count==4) return 1;
        else count=0;
    return 0;
}

void caro (int a[][m], int &n)
{
    char p1,p2;
    printf("Input size: ");  //Input for both length and width
    scanf("%d", &n);
    while (n<5)
    {
        printf("Please input size larger than 5:");
        scanf("%d", &n);
    }
    printf("Symbol for player 1:");
    scanf(" %c", &p1);
    printf("Symbol for player 2:");
    scanf(" %c", &p2);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            a[i][j]=0;
    output(a,n,p1,p2);
    int k,count,vt1,vt2;
    k=count=0;
    printf(" Game start \n");
    while (k!=1 && k!=2)
    {
    t:    printf("Input x coordinate:");    //Nhap vi tri de danh co
        scanf("%d", &vt1);
        printf("Input y coordinate:");
        scanf("%d", &vt2);
        if (a[vt1][vt2]==1 || a[vt1][vt2]==2)// if move has been played
        {
            printf("This position is already played\n");
            goto t;    // Tro lai cau lenh nhap vi tri
        }
        if (count % 2 == 0)
        {
            printf("To confirm move, press 1:");
            scanf("%d", &a[vt1][vt2]);
            if (a[vt1][vt2] !=1)
            {
                printf("Press 1 to confirm your move:");
                scanf("%d" ,&a[vt1][vt2]);
            }
        }
        else
        {
            printf("To confirm move, press 2:");
            scanf("%d", &a[vt1][vt2]);
            if (a[vt1][vt2] !=2)
            {
                printf("Press 2 to confirm your move:");
                scanf("%d" ,&a[vt1][vt2]);
            }
        }
        output(a,n,p1,p2);
        count++;
        /*if (count>=5)    // Checkwin when there's >5 moves played*/
            k=checkwin(a,n);
    }
    if (k==1)
        printf("The winner is X");
    else
        printf("The winner is O");
}

int checkwin (int a[][m], int n)
{
    int kt;
    for (int i=0;i<20;i++)
        for (int j=0;j<40;j++)
        {
            if (a[i][j]==1)
            {
                kt=check(a,n,i,j);
                if (kt==1)
                    return 1;
            }
            if (a[i][j]==2)
            {
                kt=check(a,n,i,j);
                if (kt==1)
                    return 2;
            }
        }
    return 0;
}

void output (int a[][m], int n, char p1, char p2)
{
    system("cls");// clearscreen
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[i][j]==1)
                printf("%c ",p1);
            else if (a[i][j]==2)
                printf("%c ",p2);
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int xo(int n)
{
	if (n==2) return 1;
	else return 2;
}
