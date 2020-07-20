#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		long long int beg=0;
		long long int end=n;
		if(k==1){
			cout<<n<<endl;
		}
		else{
			long long int x=0;
			while(beg<=end){
				long long int mid=(beg+end)/2;
				if(pow(mid,k)==n){
					x=mid;
					break;
				}
				else if(pow(mid,k)<n){
					x=mid;
					beg=mid+1;
				}
				else if(pow(mid,k)>n){
					end=mid-1;
				}
			}
			cout<<x<<endl;
		}
	}
	return 0;
}