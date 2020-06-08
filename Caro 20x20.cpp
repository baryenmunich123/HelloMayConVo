#include <iostream>
#include "Function.h"
using namespace std;
int main() {
	int A[20][40], p1, p2, check;
	p1 = p2 = check = 0;
	do {
		DrawBoard();
		DrawScoreBoard(p1,p2);
		caro(A, p1, p2);
		check=Continuetoplay();
	} while (check == 1);
	
	return 0;

	
}
