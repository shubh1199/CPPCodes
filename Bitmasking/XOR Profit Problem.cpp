#include<iostream>
using namespace std;
int main () {
	int x,y;
	cin>>x>>y;
	if(x==y){
		cout<<"0";
	}
	else{
		int max=0;
		for(int i=x;i<=y;i++){
            for(int j=i;j<=y;j++){
				int a=i;
				int b=j;
				if((a^b)>max){
					max=(a^b);
				}
			}
		}
		cout<<max;
	}
	return 0;
}