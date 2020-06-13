#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void TextColor(int x)
{
	HANDLE color;
	color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,x);
}
void border ()
{
    TextColor (14);
    printf(".-=~=-.                                                                 .-=~=-.\n");
    printf("(__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(_ ___)                                                                 (_ ___)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
TextColor (14);    printf("(_ ___)"); TextColor (2); printf("            ______         __        _______          ____"); TextColor (14); printf("       ( _ __)\n");
TextColor (14);    printf("(__  _)"); TextColor (3); printf("          .' ___  |       /  \\\      |_   __ \\\       .'    `."); TextColor (14);   printf("     (__  _)\n");
TextColor (14);    printf("( _ __)"); TextColor (12); printf("         / .'   \\\_|      / /\\\ \\\       | |__) |     /  .--.  \\"); TextColor (14);  printf("    (_ ___)\n");
TextColor (14);    printf("(__  _)"); TextColor (14); printf("         | |            / ____ \\\      |  __ /      | |    | |"); TextColor (14);  printf("    (__  _)\n");
TextColor (14);    printf("(_ ___)"); TextColor (6); printf("         \\\ `.___.'\\\   _/ /    \\\ \\\_   _| |  \\\ \\\_    \\\  `--'  /"); TextColor (14);  printf("    ( _ __)\n");
TextColor (14);    printf("(__  _)"); TextColor (13); printf("          `._____.'  |____|  |____| |____| |___|    `.____.'"); TextColor (14);   printf("     (__  _)\n");
TextColor (14);    printf("(__  _)                                                                 (__  _)\n");
TextColor (14);    printf("(_ ___)"); TextColor (15); printf("                         1. New Game"); TextColor (14); printf("                             (_ ___)\n");
TextColor (14);    printf("(__  _)"); TextColor (15); printf("                         2. Instruction"); TextColor (14); printf("                          (__  _)\n");
TextColor (14);    printf("( _ __)"); TextColor (15); printf("                         3. Credit"); TextColor (14); printf("                               ( _ __)\n");
TextColor (14);    printf("(__  _)"); TextColor (15); printf("                         4. Quit game"); TextColor (14); printf("                            (__  _)\n");
    TextColor (14);
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
TextColor (14);    printf("( _ __)"); TextColor (15); printf("                    Please press from 1 to 4"); TextColor (14); printf("                     ( _ __)\n");
    TextColor (14);
    printf("(__  _)                                                                 (__  _)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(_ ___)\n");
    printf("`-._.-'                                                                 `-._.-'\n");
}

void Instruction ()
{
    TextColor (6);
    printf("   __________________________________________________________________________________\n");
    printf(" / \\\                                                                                 \\\.\n");
    printf("|   |                                                                                |.\n");
    printf(" \\\_ |                                                                                |.\n");
    printf("    |"); printf("                                 INSTRUCTION:"); printf("                                   |.\n");
    printf("    |"); printf(" Playing Caro is pretty straightforward.It is played using X/O symbol."); printf("          |.\n");
    printf("    |"); printf(" Players take turns placing their symbol on an open intersection on the board."); printf("  |.\n");
    printf("    |"); printf(" The row can be horizontal, vertical, or diagonal as long as it is unbroken."); printf("    |.\n");
    printf("    |"); printf(" The player that manages to create 5 in a row first wins the round."); printf("             |.\n");
    printf("    |"); printf(" You can not win by creating 6 in a row or more."); printf("                                |.\n");
    printf("    |"); printf(" 5 in a row but stucked in the middle of other symbol is invalid."); printf("               |.\n");
    printf("    |                                                                                |.\n");
    printf("    |                       .----------------.        _________________________      |.\n");
    printf("    |                      | .--------------. |      |                         |     |.\n");
    printf("    |                      | | ____    ____ | |      |                 /       |     |.\n");
    printf("    |                      | ||_   _||_   _|| |      |      /         /        |     |.\n");
    printf("    |                      | |  | | /\\\ | |  | |      |     / __enter_/         |     |.\n");
    printf("    |                      | |  | |/  \\\| |  | |      |     \\\                   |     |.\n");
    printf("    |                      | |  |__/  \\\__|  | |      |      \\\                  |     |.\n");
    printf("    |                      | '--------------' |      |_________________________|     |.\n");
    printf("    |                       '----------------'                                       |.\n");
    printf("    |  .----------------.   .----------------.   .----------------.                  |.\n");
    printf("    | | .--------------. | | .--------------. | | .--------------. |                 |.\n");
    printf("    | | |      __      | | | |    _______   | | | |  ________    | |                 |.\n");
    printf("    | | |     /  \\\     | | | |   /  ___  |  | | | | |_   ___ `.  | |                 |.\n");
    printf("    | | |    / /\\\ \\\    | | | |  |  (__ \\\_|  | | | |   | |   `. \\\ | |                 |.\n");
    printf("    | | |   / ____ \\\   | | | |   '.___`-.   | | | |   | |    | | | |                 |.\n");
    printf("    | | | _/ /    \\\ \\\_ | | | |  |`\\\____) |  | | | |  _| |___.' / | |                 |.\n");
    printf("    | | ||____|  |____|| | | |  |_______.'  | | | | |________.'  | |                 |.\n");
    printf("    | | '--------------' | | '--------------' | | '--------------' |                 |.\n");
    printf("    |  '----------------'   '----------------'   '----------------'                  |.\n");
    printf("    |   _____________________________________________________________________________|___\n");
    printf("    |  /                                                                                /.\n");
    printf("    \\\_/________________________________________________________________________________/.\n");

}
void Credit ()
{
    TextColor (3);
    printf("   ___________________________________________________________\n");
    printf(" / \\\                                                          \\\.\n");
    printf("|   |                                                         |.\n");
    printf(" \\\_ |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |"); printf("           ABOUT US:                    Instructor:"); printf("      |.\n");
    printf("    |"); printf("    HA TIEN DAT (Leader)               Tran Thanh Tung"); printf("   |.\n");
    printf("    |"); printf("    Nguyen Thanh Phong ITITIU19040"); printf("                       |.\n");
    printf("    |"); printf("    Bui Minh Quang ITITIU19044"); printf("                           |.\n");
    printf("    |"); printf("    Dinh Bao Duy ITITIU19107"); printf("                             |.\n");
    printf("    |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |   ______________________________________________________|___\n");
    printf("    |  /                                                         /.\n");
    printf("    \\\_/_________________________________________________________/.\n");

}
void Exit ()
{
    system("cls");
    printf("\n\n\n");
TextColor (13);    printf("          ___  ___  ___ _   _  ___  _   _\n");
TextColor (13);    printf("         / __|/ _ \\\/ _ \\\ | | |/ _ \\\| | | |\n");
TextColor (13);    printf("         \\\__ \\\  __/  __/ |_| | (_) | |_| |\n");
TextColor (13);    printf("         |___/\\\___|\\\___|\\\___ |\\\___/ \\\____|\n");
TextColor (13);    printf("                         __/ |\n");
TextColor (13);    printf("                        |___/\n");

}
int main ()
{
    border ();
    int n;
    TextColor (15);
    scanf ("%d",&n);
    while (n != 4)
    {
        switch (n)
        {
            case 2:
            {
                Instruction();
                break;
            }
            case 3:
            {
                Credit();
                break;
            }
            default:
                {
                    printf ("Please press from 1 to 4: ");
                }
        };
        TextColor (15);
        scanf ("%d",&n);
    }
    if (n == 4)
    {
        Exit();
    }
    return 0;
}
