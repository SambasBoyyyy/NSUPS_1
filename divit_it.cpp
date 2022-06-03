#include<iostream>

using namespace std;

int main(){


int times;
cin>>times;

while (times--)
{
    
    long long int t;
    cin>>t;
   
    int count = 0;  
    while (1)
    {
          if (t == 1)
          {
              count= count + 0;
              break;
          }
          
        else if(t%2 == 0){
           
            t=t/2;

            count++;
           
        }
        else if(t%3 == 0){
            t=(2*t)/3;
            count++;

        }
        else if (t%5 == 0)
        {
            t=(4*t)/5;
            count++;
          
        }
        else{
            
            count= -1;
            break;
        }
        
    }
    
     cout<<count<<endl;

}

}