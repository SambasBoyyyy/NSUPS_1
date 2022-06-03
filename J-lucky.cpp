#include<iostream>
using namespace std;

int main(){

long long int  x,a;

int digit=0;

cin>>x;

while (x)
{
    a= x%10;

    if(a == 4 || a== 7)
    {
        digit++;
    }
    
    x=x/10;
}

if (digit == 4 || digit == 7 || digit == 47 || digit == 74 )
{
     cout<<"YES";
}
else{
    cout<<"NO";
}






}