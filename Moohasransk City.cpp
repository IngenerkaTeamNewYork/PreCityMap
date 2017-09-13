#include <iostream>
#include "TXlib.h"

using namespace std;

void buttons();

int main()
{
    txCreateWindow(1000,600);

     char City[20];
     cout << "> ";
     cin >> City;
     if(strcmp(City, "1")== 0 )
     {
      UlyanovskDraw()//cout <<"Ульяновск=1";
     }
    return 0;
}
void UlyanovskDraw()
{
txSetColor(TX_RED);
txLine(100, 50, 400, 50);
txLine(400, 50, 400, 150);
txLine(400, 150, 300, 150);
txLine(300, 150, 300, 450);
txLine(300, 450, 100, 450);
txLine(100, 450, 100, 50);






}
