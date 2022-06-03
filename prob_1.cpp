#include<iostream>
using namespace std;

int main(){

      int times ;
      cin>> times;

      while (times--)
      {
        int n;
        cin>>n;
        int x=n;
        int count=0,count_h=0;
        while (n>0)
        {
            
            if(n%2 == 1){
                count++;
            }
            n=n/2;
        }
            
         cout<<count<<" ";

         while (x>0)
        {
            
            if(x%16 == 1){
                count_h++;
            }
            x=x/16;
        }
            
         cout<<count_h<<endl;
      }
      



    return 0;
}