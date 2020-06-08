

#include<iostream>
#include<windows.h>
#include<conio.h>
#include <stdio.h>
#define UpwardLim 4
#define DownwardLim 23
#define LeftLim 11
#define RightLim 50
#define Enter 13


using namespace std;
void TextColor();
void gotoxy();
void PrintXO();
void DrawBoard();
void DrawScoreBoard();
void Control();
int check();
void caro();
int checkwin(int A[20][40]);
int Continuetoplay();




void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void PrintXO(char c, int x, int y)
{
	if (x % 2 == 0) {
		if (y % 2 == 0) {
			gotoxy(x, y);
			TextColor(112);
			cout << c;
		}
		else {
			gotoxy(x, y);
			TextColor(240);
			cout << c;
		}
	}
	else {
		if (y % 2 == 0) {
			gotoxy(x, y);
			TextColor(240);
			cout << c;
		}
		else {
			gotoxy(x, y);
			TextColor(112);
			cout << c;
		}
	}
}

void DrawBoard()
{
	
	TextColor(10);

	
	for (int i = 0; i < 42; i++) {
		switch (i)
		{
			case 0:
			{
				gotoxy(10 + i, 3);
				cout << char(201);
				gotoxy(10 + i, 24);
				cout << char(200);
				break;
			}
			case 41:
			{
				gotoxy(10 + i, 3);
				cout << char(187);
				gotoxy(10 + i, 24);
				cout << char(188);
				break;
			}
			default:
			{
				gotoxy(10 + i, 3);
				cout << char(205);
				gotoxy(10 + i, 24);
				cout << char(205);
				break;
			}
		}
	}
	/////Draw the board: x=10 --->51; y = 3 ----> 24
	for (int i = 4; i <24; i++) {
		gotoxy(10, i);
		cout << char(186);
		gotoxy(51, i);
		cout << char(186);
	}
	
	for (int i = 11; i < 51; i++) {
		for (int j = 4; j < 24; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					gotoxy(i, j);
					TextColor(7);
					cout << char(219);
				}
				else {
					gotoxy(i, j);
					TextColor(15);
					cout << char(219);
				}
			}
			else {
				if (j % 2 == 0) {
					gotoxy(i, j);
					TextColor(15);
					cout << char(219);
				}
				else {
					gotoxy(i, j);
					TextColor(7);
					cout << char(219);
				}
			}
		}
	}
}
void DrawScoreBoard(int p1, int p2)
{	
	TextColor(14);
	for (int i = 0; i <23 ; i++) {
		switch (i)
		{
			case 0:
			{
				gotoxy(60 + i, 3);
				cout << char(201);
				gotoxy(60 + i, 5);
				cout << char(204);
				gotoxy(60 + i, 10);
				cout << char(200);
				break;
			}
			case 11:
			{
				gotoxy(60 + i, 3);
				cout << char(203);
				gotoxy(60 + i, 5);
				cout << char(206);
				gotoxy(60 + i, 10);
				cout << char(202);
				break;
			}
			case 22:
			{
				gotoxy(60 + i, 3);
				cout << char(187);
				gotoxy(60 + i, 5);
				cout << char(185);
				gotoxy(60 + i, 10);
				cout << char(188);
				break;
			}
			default:
			{
				gotoxy(60 + i, 3);
				cout << char(205);
				gotoxy(60 + i, 5);
				cout << char(205);
				gotoxy(60 + i, 10);
				cout << char(205);
				break;
			}
		}
	}
	/////Draw the score board: x=60 --->51; y = 3 ----> 7
	for (int i = 4; i <10; i++) {
		if (i==5) continue;
		gotoxy(60, i);
		cout << char(186);
		gotoxy(71, i);
		cout << char(186);
			gotoxy(82, i);
		cout << char(186);
	}
	gotoxy(61, 4);
	cout<<"Player 1";
	gotoxy(73, 4);
	cout<<"Player 2";
	TextColor(15);
	gotoxy(65, 7);
	cout << p1;
	gotoxy(76, 7);
	cout << p2;
	TextColor(15);
	gotoxy(61, 15);
	cout<<"            _                  ";  
	gotoxy(61, 16);
	cout<<"          -=\\`\\                "; 
	gotoxy(61, 17);
	cout<<"      |\\ ____\\_\\__             ";  
	gotoxy(61, 18);
	cout<<"    -=\\c`\"\"\"\"\"\"\" \"`)           ";  
	gotoxy(61, 19);
	cout<<"       `~~~~~/ /~~`\            "; 
	gotoxy(61, 20);
	cout<<"         -==/ /                ";  
	gotoxy(61, 21);
	cout<<"           '-'                 ";  
	gotoxy(22, 15);
	
}
int Control(int A[20][40], int &CurX, int &CurY, int &turn)
{
	
	
	
	while (true)
	{
		if (_kbhit())
		{
			char key = _getch();
			switch (key)
			{
			case 'w': case 'W':
			{	if (CurY > UpwardLim)
			{
				CurY--;
				gotoxy(CurX, CurY);
			}
			break;
			}
			case 's': case 'S':
			{
				if (CurY < DownwardLim)
				{
					CurY++;
					gotoxy(CurX, CurY);

				}
				break;
			}
			case 'a': case 'A':
			{
				if (CurX > LeftLim)
				{
					CurX--;
					gotoxy(CurX, CurY);

				}
				break;
			}
			case 'd': case 'D':
			{
				if (CurX < RightLim)
				{
					CurX++;
					gotoxy(CurX, CurY);

				}
				break;
			}
			case Enter:
			{
				if (A[CurY - UpwardLim][CurX - LeftLim] == 1 || A[CurY - UpwardLim][CurX - LeftLim] == 2)// if move has been played
				{

					gotoxy(60, 30);
					printf("This position is already played\n");
					_getch();
						gotoxy(60, 30);
					printf("                               \n");
					
					gotoxy(CurX, CurY);
					// Tro lai cau lenh nhap vi tri
				}
				else if (turn % 2 == 0)
				{
					PrintXO('X', CurX, CurY);
					A[CurY - UpwardLim][CurX - LeftLim] = 1;
					gotoxy(60, 24);
					cout << "CurX= " << CurX - LeftLim << " CurY =" << CurY - UpwardLim;
					gotoxy(CurX, CurY);
					turn++;
					return 0; /// Stop the function immediately
				}
				else
				{
					PrintXO('O', CurX, CurY);
					A[CurY - UpwardLim][CurX - LeftLim] = 2;
					gotoxy(60, 24);
					cout << "CurX= " << CurX - LeftLim << " CurY =" << CurY - UpwardLim;
					gotoxy(CurX, CurY);
					turn++;
					return 0; /// Stop the function immediately
				}
				break;
			}
			}
		}

	}
}

//// LOGIC PART 
int check(int a[20][40], int i, int j) // a là array bàn c?, i,j là t?a d?, move(1 ho?c 2) là ngu?i choi
{
	int k, block[2] = { 0 }, interupt[2] = { 0 };
	int count = 0; int centr = a[i][j];// Gan 1 hoac 2 vao bien centr
	for (int k = 1; k <= 5; k++)    //Xet theo chieu ngang
	{
		if (a[i][j + k] == centr)
		{
			count++;
		}
		else if (a[i][j + k] != 0) block[0] = 1;
		if (a[i][j - k] == centr)
			count++;
		else if (a[i][j - k] != 0) block[1] = 1;
		if (k < 5)
		{
			if (a[i][j + k] == 0 || a[i][j + k] != centr)
				interupt[0] = 1;
			if (a[i][j - k] == 0 || a[i][j - k] != centr)
				interupt[1] = 1;
		}
	}
	if (count == 4 && block[1] + block[0] != 2 && interupt[0] + interupt[1] != 2)
		return 1;
	else { count = 0; block[1] = 0; block[1] = 0; interupt[0] = 0; interupt[1] = 0; }
	for (k = 1; k <= 5; k++)    //Xet theo duong cheo song xong voi cheo chinh
	{
		if (a[i + k][j + k] == centr)
		{
			count++;
		}
		else if (a[i + k][j + k] != 0)
			block[0] = 1;
		if (a[i - k][j - k] == centr)
		{
			count++;
		}
		else if (a[i - k][j - k] != 0)
			block[1] = 1;
		if (k < 5)
		{
			if (a[i + k][j + k] == 0 || a[i + k][j + k] != centr)
				interupt[0] = 1;
			if (a[i - k][j - k] == 0 || a[i - k][j - k] != centr)
				interupt[1] = 1;
		}
	}
	if (count == 4 && block[1] + block[0] != 2 && interupt[0] + interupt[1] != 2)
		return 1;
	else { count = 0; block[1] = 0; block[1] = 0; interupt[0] = 0; interupt[1] = 0; }
	for (k = 1; k <= 5; k++)    //Xet theo chieu doc
	{
		if (a[i + k][j] == centr)
		{
			count++;
		}
		else if (a[i + k][j] != 0) block[0] = 1;
		if (a[i - k][j] == centr)
			count++;
		else if (a[i - k][j] != 0) block[1] = 1;
		if (k < 5)
		{
			if (a[i + k][j] == 0 || a[i + k][j] != centr)
				interupt[0] = 1;
			if (a[i - k][j] == 0 || a[i - k][j] != centr)
				interupt[1] = 1;
		}
	}
	if (count == 4 && block[1] + block[0] != 2 && interupt[0] + interupt[1] != 2)
		return 1;
	else { count = 0; block[1] = 0; block[1] = 0; interupt[0] = 0; interupt[1] = 0; }
	for (k = 1; k <= 5; k++)    //Xet theo duong cheo song song song voi cheo phu
	{
		if (a[i + k][j - k] == centr)
		{
			count++;
		}
		else if (a[i + k][j - k] != 0) block[0] = 1;
		if (a[i - k][j + k] == centr)
			count++;
		else if (a[i - k][j + k] != 0) block[1] = 1;
		if (k < 5)
		{
			if (a[i + k][j - k] == 0 || a[i + k][j - k] != centr)
				interupt[0] = 1;
			if (a[i - k][j + k] == 0 || a[i - k][j + k] != centr)
				interupt[1] = 1;
		}
	}
	if (count == 4 && block[1] + block[0] != 2 && interupt[0] + interupt[1] != 2)
		return 1;
	else { count = 0; block[1] = 0; block[1] = 0; interupt[0] = 0; interupt[1] = 0; }
	return 0;
}




void caro(int A[20][40], int &p1,int &p2)
{
	for (int i = 0; i < 20; i++) /// Reset the data
		for (int j = 0; j < 40; j++)
			A[i][j] = 0;

	int k, turn;
	k = turn = 0;
	int CurX = 22, CurY = 15;
	while (k != 1 && k != 2)
	{
		Control(A,CurX,CurY,turn);
		/*for (int i = 0; i < 20; i++)
		{
			gotoxy(61, i);
			for (int j = 0; j < 40; j++)
				cout << A[i][j] << " ";
		}
		gotoxy(CurX,CurY); */
		k = checkwin(A);
	}
	if (k == 1)
	{	gotoxy(60,32);
		printf("The winner is X");
		p1++;
	}
	else
	{
		gotoxy(60, 32);
		printf("The winner is O");
		p2++;
	}
}

int checkwin(int A[20][40])
{
	int kt;
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 40; j++)
		{
			if (A[i][j] == 1)
			{
				kt = check(A, i, j);
				if (kt == 1)
					return 1;
			}
			if (A[i][j] == 2)
			{
				kt = check(A, i, j);
				if (kt == 1)
					return 2;
			}
		}
	return 0;
}

int Continuetoplay()
{

	gotoxy(0, 32);
	cout << "Do you want to continue? yes/no ~ Press y/n:  ";
	while (true)
	{
		if (_kbhit)
		{
			int temp = _getch();
			switch (temp)
			{
			case 'y': case 'Y':
			{	
			gotoxy(0, 32);
			cout << "                                              ";
			return 1;
			}
			case 'n': case 'N':
			{	
			cout << "                                              ";
			return 0;
			}
			}
		}
	}
}
