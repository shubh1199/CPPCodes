#include<iostream>
using namespace std;
int countSetBits(int n) 
{ 
    int count1 = 0; 
    while (n) { 
        count1 += n & 1; 
        n >>= 1; 
    } 
    return count1; 
} 
int main() 
{ 
    int q;
	int count;
	int i,j,a,b;
	cin>>q;
	for(i=0;i<q;i++){
		cin>>a>>b;
		count=0;  
    for(j=a;j<=b;j++){
		count=count+countSetBits(j);
	}
	cout<<count<<endl;
	}
	return 0; 
}