#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void border ()
{
    printf(".-=~=-.                                                                 .-=~=-.\n");
    printf("(__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(_ ___)                                                                 (_ ___)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)"); printf("            ______         __        _______          ____"); printf("       ( _ __)\n");
    printf("(__  _)"); printf("          .' ___  |       /  \\\      |_   __ \\\       .'    `.");    printf("     (__  _)\n");
    printf("( _ __)"); printf("         / .'   \\\_|      / /\\\ \\\       | |__) |     /  .--.  \\");   printf("    (_ ___)\n");
    printf("(__  _)"); printf("         | |            / ____ \\\      |  __ /      | |    | |");   printf("    (__  _)\n");
    printf("(_ ___)"); printf("         \\\ `.___.'\\\   _/ /    \\\ \\\_   _| |  \\\ \\\_    \\\  `--'  /");   printf("    ( _ __)\n");
    printf("(__  _)"); printf("          `._____.'  |____|  |____| |____| |___|    `.____.'");    printf("     (__  _)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)                                                                 (_ ___)\n");
    printf("(_ ___)                          1. New Game                            (_ ___)\n");
    printf("(__  _)                          2. Instruction                         (__  _)\n");
    printf("( _ __)                          3. Credit                              ( _ __)\n");
    printf("(__  _)                          4. Quit game                           (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(_ ___)\n");
    printf("`-._.-'                                                                 `-._.-'\n");
}
void Instruction ()
{
    printf("   __________________________________________________________________________________\n");
    printf(" / \\\                                                                                 \\\.\n");
    printf("|   |                                                                                |.\n");
    printf(" \\\_ |                                                                                |.\n");
    printf("    |                                                                                |.\n");
    printf("    |                                 INSTRUCTION:                                   |.\n");
    printf("    | Playing Caro is pretty straightforward.It is played using X/O symbol.          |.\n");
    printf("    | Players take turns placing their symbol on an open intersection on the board.  |.\n");
    printf("    | The row can be horizontal, vertical, or diagonal as long as it is unbroken.    |.\n");
    printf("    | The player that manages to create 5 in a row first wins the round.             |.\n");
    printf("    | You can not win by creating 6 in a row or more.                                |.\n");
    printf("    | 5 in a row but stucked in the middle of other symbol is invalid.               |.\n");
    printf("    |                                                                                |.\n");
    printf("    |                                                                                |.\n");
    printf("    |   _____________________________________________________________________________|___\n");
    printf("    |  /                                                                                /.\n");
    printf("    \\\_/________________________________________________________________________________/.\n");

}
void Credit ()
{
    printf("   ___________________________________________________________\n");
    printf(" / \\\                                                          \\\.\n");
    printf("|   |                                                         |.\n");
    printf(" \\\_ |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |                                                         |.\n");
    printf("    |           ABOUT US:                    Instructor:      |.\n");
    printf("    |    HA TIEN DAT (Leader)               Tran Thanh Tung   |.\n");
    printf("    |    Nguyen Thanh Phong ITITIU19040                       |.\n");
    printf("    |    Bui Minh Quang ITITIU19044                           |.\n");
    printf("    |    Dinh Bao Duy ITITIU19107                             |.\n");
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
    printf("      ___  ___  ___ _   _  ___  _   _\n");
    printf("     / __|/ _ \\\/ _ \\\ | | |/ _ \\\| | | |\n");
    printf("     \\\__ \\\  __/  __/ |_| | (_) | |_| |\n");
    printf("     |___/\\\___|\\\___|\\\___ |\\\___/ \\\____|\n");
    printf("                     __/ |\n");
    printf("                    |___/\n");

}
int main ()
{
    border ();
    int n;
    printf ("Please choose 1 to 4: ");
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
        scanf ("%d",&n);
    }
    if (n == 4)
    {
        Exit();
        return 0;
    }
    return 0;
}
