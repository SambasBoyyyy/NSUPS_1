#include<iostream>
using namespace std;


long int gcd(long int  numOne,long int numTwo){

long int  mp;
if(numOne<numTwo)
        mp = numOne;
    else
        mp = numTwo;
    while(1)
    {
        if((numOne%mp == 0) && (numTwo%mp == 0))
            break;
        else
            mp--;
    }

return mp;



    
}


int main(){
int timee;
cin>> timee;

while (timee--)
{
  long  int a,b;
cin>>a>>b;
  long int x = gcd(a,b);
cout<<x<<" "<<((a*b)/x)<<endl;

}
    return 0;

}

