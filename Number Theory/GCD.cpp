#include<iostream>
using namespace std;
int main() {
	int N1,N2;
	int count;
	cin>>N1>>N2;
	for(int i=2;i<=N1;i++){
	    if(N1%i==0 && N2%i==0){
			count=i;
		}
	}
	cout<<count;
	return 0;
}