#include<iostream>
using namespace std;
 


bool checkArr(int arr[],int times){

       for (int i = 0; i < times - 1; i++)
    {      

        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
 
    return true;

}
int main(){

    int arr[100];
    int times;
    cin>>times;
     int temp=0;
    
     for (int t = 0; t < times; t++)
    {      

        
       int val;
        cin>>val;
        arr[t]= val;
        
     
    }
    

    if (checkArr(arr,times))
    {
        cout<<"YES";
    }
    else{
       
       temp=arr[0];
       arr[0]=arr[times - 1];
       arr[times-1]=temp;
       
        if (checkArr(arr,times))
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
          
    }
    
    
}

