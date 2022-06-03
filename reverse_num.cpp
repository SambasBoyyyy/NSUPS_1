#include<iostream>
using namespace std;
int main(){


int times;
cin>>times;
int s,rev;
while (times--)
{
    int val;
    cin>>val;
    rev=0;
    while (val>0)
    {
        s=val%10;
        rev=rev*10+s;
        val=val/10;
        
    }
    cout<<rev<<endl;
}
}