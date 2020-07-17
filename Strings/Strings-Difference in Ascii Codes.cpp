#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin>>s;
	cout<<s[0];
	for(int i=1;s[i]!='\0';i++){
		int k=(s[i]-'a')-(s[i-1]-'a');
		cout<<k<<s[i];
	}
	return 0;
}