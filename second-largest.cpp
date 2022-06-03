#include<bits/stdc++.h>
using namespace std;

int main(){

int times;
cin>>times;
int arr[5];
while (times--)
{

    for (int i = 0; i < 3; i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + n, greater<int>());
    
    cout<<arr[1]<<endl;

}
}