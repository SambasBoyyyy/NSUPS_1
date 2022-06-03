#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,b,c,d;
cin>>a>>b;
cin>>c>>d;
cout<<max(abs(c-a),abs(d-b));
}