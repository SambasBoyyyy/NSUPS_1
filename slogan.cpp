#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
map<string, string>mp;
int main() {
	int n;
	mp.clear();
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		string a;
		string b;
		getline(cin , a);
		getline(cin , b);
		mp[a] = b;
	}
	int q;
	scanf("%d\n", &q);
	for (int i = 1; i <= q; i++) {
		string c;
		getline(cin, c);
		cout << mp[c] << endl;
	}
 }