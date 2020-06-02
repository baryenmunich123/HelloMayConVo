

#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;
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


void DrawBoard() {
	
	TextColor(14);

	
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
					TextColor(2);
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
					TextColor(2);
					cout << char(219);
				}
			}
		}
	}
	gotoxy(32,10);
	TextColor(160);
	cout << "X";
	gotoxy(33, 10);
	TextColor(240);
	cout << "X";

}
