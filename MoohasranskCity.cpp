#include <iostream>
#include "TXlib.h"

using namespace std;

void UlyanovskDraw();
void SamaraDraw();
void KaliningradDraw();

void mainTo()
{


    txClear();

    char City[20];
    cout << "1 city of Ulyanovsk> ";
    cout << "2 of Samara> ";
    cout << "3 of Kaliningrad> ";

    cin >> City;

    if (strcmp (City, "1") == 0)
    {
        UlyanovskDraw();
    } else if (strcmp (City, "2") == 0)
    {
        SamaraDraw();
    } else if (strcmp (City, "3") == 0)
    {
        KaliningradDraw();
    } else {
        cout << "Error! Wrong number!" << endl;
        mainTo();
    }
}

int main()
{
    txCreateWindow (1000, 600);

    mainTo();

    return 0;
}



void UlyanovskDraw()
{
    txSetColor (TX_RED);
    txLine (100, 50, 400, 50);
    txLine (400, 50, 400, 150);
    txLine (400, 150, 300, 150);
    txLine (300, 150, 300, 450);
    txLine (300, 450, 100, 450);
    txLine (100, 450, 100, 50);
    mainTo();
}

void SamaraDraw()
{
    txSetColor (TX_RED);
    txLine (100, 50, 400, 50);
    txLine (400, 50, 400, 150);
    txLine (400, 150, 300, 150);
    txLine (300, 150, 300, 450);
    txLine (300, 450, 100, 450);
    txLine (100, 450, 100, 50);
    txLine (500, 500, 600, 600);
    mainTo();
}

void KaliningradDraw()
{
    txSetColor (TX_RED);
    txLine (100, 50, 400, 50);
    txLine (400, 50, 400, 150);
    txLine (400, 150, 300, 150);
    txLine (300, 150, 300, 450);
    txLine (300, 450, 100, 450);
    txLine (100, 450, 100, 50);
    txLine (400, 500, 400, 500);
    mainTo();
}
