#include <iostream>
#include "Function.h"
#include "Menu.h"
#pragma comment(lib, "winmm.lib")
using namespace std;

int main() {
	int A[20][40], p1, p2, check;
	int COMMAND = 0;
	while (COMMAND != 4) //  COMMAND = 4 
	{
		PlaySound(TEXT("Music\\Alo.wav"), NULL, SND_ASYNC | SND_LOOP);
		
		p1 = p2 = 0; // The varible p1 and p2 are player's point
		check = 1;	// The varible check is to make sure if the players want to continue to play.
		Menu(COMMAND);				//Print out the Menu 
		if (COMMAND == 4) return 0;			//This condition if the players want to end immediately
		while (check == 1)
		{
			system("cls");
			PlaySound(TEXT("Music\\METAL.wav"), NULL, SND_ASYNC | SND_LOOP);
			DrawBoard();
			DrawScoreBoard(p1, p2);
			caro(A, p1, p2);
			PlaySound(TEXT("Music\\WinSong.wav"), NULL, SND_ASYNC);
			check = Continuetoplay(p1,p2);
		}
	}
	return 0;

	
}

