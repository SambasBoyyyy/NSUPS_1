#include<iostream>
using namespace std;

int main(){

int times;
cin>>times;
int a,b,c;
while (times--)
{
    cin>>a>>b>>c;
  
    if (a==0 || b==0 || c==0 ||(a+b+c) != 180)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    


}
}