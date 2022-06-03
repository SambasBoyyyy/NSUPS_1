#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

int test;
cin>>test;

while (test--)
{
   float len;
   cin>>len;
   float wid = (6 * len)/10;
   float red = 3.1416*(len/5)*(len/5);
    
    float green = (len*wid) - red;

   
     printf("%.2lf %.2lf\n",red,green);


}



}

