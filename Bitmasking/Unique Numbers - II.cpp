#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int no;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>no;
		arr[i]=no;
		ans=ans^no;
	}
	int temp=ans;
	int pos=0;
	while((temp&1)!= 1){
		pos++;
		temp= (temp>>1);
	}
	int mask=(1<<pos);
	int a=0;
	int b=0;
	for(int i=0;i<n;i++){
        if((arr[i]&mask) > 0){
        a=a^arr[i];
		}
	}
	b=ans^a;

	cout<<min(a,b)<<" "<<max(a,b);
	return 0;
}