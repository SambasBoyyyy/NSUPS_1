#include<bits/stdc++.h>
using namespace std;

int main(){


int digit;
cin>>digit;
int flag=0;

for (int  i = 1; i < digit; i++)
{
    int val;
    cin>>val;
    if(val != i)
    flag++;
}


if(flag>2)
cout<<"NO";
else
cout<<"YES";




}