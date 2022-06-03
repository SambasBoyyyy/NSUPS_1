#include<iostream>
#include<algorithm>
using namespace std;

int  main(){


int times;
cin>>times;

while (times--)
{
    int digit;
    cin>>digit;
    int arr[digit];
    for(int k=0; k<digit; k++){
       int val;
       cin>>val;
       arr[k]=val;
    }
    
 int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
  cout<<arr[0]+arr[1]<<endl;
}
}