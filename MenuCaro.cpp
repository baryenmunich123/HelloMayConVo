#include <iostream>
#include <stdio.h>

using namespace std;
void border ()
{
    printf(".-=~=-.                                                                 .-=~=-.\n");
    printf("(__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(_ ___)        _______      ________      ________      __________      (_ ___)\n");
    printf("(__  _)       |       |    |        |    |        |    |          |     (__  _)\n");
    printf("( _ __)       |    ___|    |   __   |    |   _____|    |   ____   |     ( _ __)\n");
    printf("(__  _)       |    |       |  |  |  |    |  |          |  |    |  |     (__  _)\n");
    printf("(_ ___)       |    |       |  |  |  |    |  |          |  |    |  |     (_ ___)\n");
    printf("(__  _)       |    |__     |  |__|  |    |  |          |  |____|  |     (__  _)\n");
    printf("( _ __)       |       |    |  |  |  |    |  |          |          |     ( _ __)\n");
    printf("(__  _)       |_______|    |__|  |__|    |__|          |__________|     (__  _)\n");
    printf("(_ ___)                                                                 (_ ___)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)                          1. New Game                            (_ ___)\n");
    printf("(__  _)                          2. Option                              (__  _)\n");
    printf("( _ __)                          3. Instruction                         ( _ __)\n");
    printf("(__  _)                          4. Credit                              (__  _)\n");
    printf("(__  _)                          5. Quit game                           (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("( _ __)                                                                 ( _ __)\n");
    printf("(__  _)                                                                 (__  _)\n");
    printf("(_ ___)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(_ ___)\n");
    printf("`-._.-'                                                                 `-._.-'\n");
}
void Instruction ()
{
    printf("                                 INTRSUCTION:                    \n");
    printf (" Playing Caro is pretty straightforward. It is played using the X and O symbol.\n\n");
    printf (" Players take turns placing their symbol on an open intersection on the board.\n\n");
    printf (" The row can be horizontal, vertical, or diagonal as long as it is unbroken.\n\n");
    printf (" The player that manages to create 5 in a row first wins the round.\n\n");

}
void Credit ()
{
    printf ("              ABOUT US:                             Instructor:\n");
    printf ("       HA TIEN DAT (Leader)                        Tran Thanh Tung\n");
    printf ("       Nguyen Thanh Phong ITITIU19040\n");
    printf ("       Bui Minh Quang ITITIU19044\n");
    printf ("       Dinh Bao Duy ITITIU19107\n");
}
int main ()
{
    border ();
    int n;
    printf ("Please choose 1 to 5: ");
    scanf ("%d",&n);
    while (n != 5)
    {
        switch (n)
        {
            case 3:
            {
                Instruction();
                break;
            }
            case 4:
            {
                Credit();
                break;
            }
            case 5:
                return 0;
        };
        scanf ("%d",&n);
    }
    return 0;
}
