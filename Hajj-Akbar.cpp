#include<iostream>
using namespace std;

int main(){

int i=1;
bool n=true;
string s;
while (n)
{ 
    cin>>s;
    if (s== "*")
    {
       break;
    }
    else if(s == "Hajj"){
        cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
    }
    else if(s == "Umrah"){
        cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
    }
    else{
        return 0;
    }

    i++;
   
}

}