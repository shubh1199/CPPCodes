#include<iostream>
using namespace std;
int main() {
	int n,m,i,j,k;
	cin>>n>>m>>j;
	for(i=n;i<=m;i=i+j){
		k=(i - 32) * 5/9;
		cout<<i<<" "<<k<<endl;
	}
	return 0;
}