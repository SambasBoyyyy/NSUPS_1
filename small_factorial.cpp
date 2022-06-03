#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}


int main(){
int times;

cin>>times;
while (times--)
{
    int val;
    cin>>val;
    cout<<factorial(val)<<endl;
}
}