#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int arr[32];
		int n;
		cin>>n;

		int i=0;
        while(n>0){
        arr[i]=n%2;
		n=n/2;
		i++;
		}
int count=0;
		 for (int j = i - 1; j >= 0; j--){ 
        if(arr[j]==1){
			count++;
		}
		}
		cout<<count<<endl; 
	}
	return 0;
}