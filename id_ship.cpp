#include<iostream>
using namespace std;

int main(){

int times;
cin>>times;
while (times--)
{
    
    char c;
    cin>>c;

    if (c == 'c' || c == 'C')
    {
        cout<<"Cruiser"<<endl;
    }
    else if (c == 'B' || c == 'b')
    {
        cout<<"BattleShip"<<endl;
    }
    else if (c == 'D' || c == 'd')
    {
        cout<<"Destroyer"<<endl;
    }
    else if (c == 'F' || c == 'f')
    {
        cout<<"Frigate"<<endl;
    }



}
}