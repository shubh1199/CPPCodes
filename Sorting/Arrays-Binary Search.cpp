#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			count++;
			cout<<i;
		}
	}
	if(count==0){
		cout<<"-1";
	}
}