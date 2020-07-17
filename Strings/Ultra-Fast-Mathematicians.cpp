#include<iostream>
using namespace std;
int main(){
	char str1[101], str2[101];
	char a='1', b='0';
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	cin>>str1;
	cin>>str2;

	for(int i=0;str1[i]!='\0';i++){
		if(str1[i]==a or str1[i]==b){
        if(str2[i]==a or str2[i]==b){
		if(str1[i]==str2[i]){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
		}
		}
	}
	cout<<endl;
	}
}