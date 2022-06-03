

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np){
        int a = (k * l) / nl;
        int aa = p / np;
        int aaa = c * d;
        int ans = min(a, min(aa, aaa)) / n;
        cout<<ans<<endl;
    }
}
