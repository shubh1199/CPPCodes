#include<iostream>
using namespace std;
int main() {
	int n,i;
	int k=0;
	while(i>0){
		cin>>n;
		k=k+n;
		if(k>=0){
			cout<<n<<endl;
		}
		else{
			break;
		}
		i++;
	}
	return 0;
}