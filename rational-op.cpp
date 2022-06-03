#include<iostream>
using namespace std;

int main(){

int times;
cin>>times;
int a,b;
while (times--)
{
    cin>>a>>b;
  
     if (a>b)
     {
         cout<<">"<<endl;
     }
     else if (a<b)
     {
         cout<<"<"<<endl;
     }
     else if (a=b)
     {
         cout<<"="<<endl;
     }
     

}


}