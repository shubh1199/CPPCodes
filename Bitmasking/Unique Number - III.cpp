#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[64]={0};
	int no;

	for(int i=0;i<n;i++){
		cin>>no;
		int j=0;
		while(no>0){
			int lb=(no&1);
			arr[j]+=lb;
			j++;
			no=no>>1;
		}
	}
	int p=1;
	int ans=0;
	for(int i=0;i<64;i++){
		arr[i]%=3;
        ans+=arr[i]*p;
		p=p<<1;
	}
	cout<<ans;
	return 0;
}