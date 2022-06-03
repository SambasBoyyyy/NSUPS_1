#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t ;
    cin >> t;
    while(t--){
    int n,length=0;
    cin >> n;
    int temp=n;
    while(temp/=10){
          length++;
    }
    int last_digit = n%10;
    int first_digit = n/pow(10,length);
    cout << last_digit+first_digit <<'\n';
    }

    }