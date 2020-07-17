#include<iostream>
#include<string>

using namespace std;
int main() {
	string s;
	cin>>s;
    int arr[26]={0};
	for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
	int maxidx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>arr[maxidx]){
            maxidx=i;
        }
    }
    char c='a'+ maxidx;
    cout<<c;
	return 0;
}