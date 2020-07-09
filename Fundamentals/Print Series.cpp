#include<iostream>
using namespace std;
int main() {
	int n1,n2,n,k;
	int i=0;
	cin>>n1;
	cin>>n2;
	for(n=0;n>=0;n++){
		k=3*n+2;
		if(k>n2){
			if(k%n2!=0){
			cout<<k<<endl;
			i=i+1;
			if(i==n1){
                break;
			}
		}
		}
	}
	return 0;
}