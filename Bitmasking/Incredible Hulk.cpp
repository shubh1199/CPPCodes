#include<iostream>
using namespace std;
int main() {
	int testcases,i;
	cin>>testcases;
	for(i=0;i<testcases;i++){
		int num;
		cin>>num;
		int count=0;
		while(num>0){
			int result=num&1;
			num=num>>1;
			count=count+result;
		}
		cout<<count<<endl;
	}
	return 0;
}