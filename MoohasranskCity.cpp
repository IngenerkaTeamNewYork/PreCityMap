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
    char Prison[20];
    char Station[20];
    cout << "1 city of Ulyanovsk> ";
    cout << "2 of Samara> ";
    cout << "3 of Kaliningrad> ";
    cin >> City;
    cout << "1 Station po centru ";
    cout << "2 Station sleva ";
    cout << "3 Station sprava ";
    cin >> Station;
    cout << "1 Prison po centru ";
    cout << "2 Prison sleva ";
    cout << "3 Prison sprava ";
    cin >> Prison;

    if (strcmp (Prison, Station) == 0)
    {
        cout << "error";
        return;
    }

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

    if (strcmp (Station, "1") == 0)
    {
        txCircle(200, 200, 30);
        txTextOut(200, 200, "station");
    } else if (strcmp (Station, "2") == 0)
    {
        txCircle(50, 200, 30);
        txTextOut(50, 200, "station");
    } else if (strcmp (Station, "3") == 0)
    {
        txCircle(500, 200, 30);
        txTextOut(500, 200, "station");
    }

    if (strcmp (Prison, "1") == 0)
    {
        txCircle(200, 200, 30);
        txTextOut(200, 200, "Prison");
    } else if (strcmp (Prison, "2") == 0)
    {
        txCircle(50, 200, 30);
        txTextOut(50, 200, "Prison");
    } else if (strcmp (Prison, "3") == 0)
    {
        txCircle(500, 200, 30);
        txTextOut(500, 200, "Prison");
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
}
