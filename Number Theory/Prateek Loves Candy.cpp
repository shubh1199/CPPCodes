#include<iostream>
#define ll long
long long int primearray[1000001];
using namespace std;
void seive(ll p[1000001]){
     for(ll i=3;i<1000001;i=i+2){
		 p[i]=1;
	 }
	 for(ll i=3;i<1000001;i=i+2){
		 if(p[i]==1){
			 for(ll j=i*i;j<1000001;j=j+i){
				 p[j]=0;
			 }
		 }
	 }
	 p[0]=p[1]=0;
	 p[2]=1;

     ll index = 1;
	 primearray[0]=2;
	 for(int i=3;i<1000001;i=i+2)
	 {
		 if(p[i])
		 {
			 primearray[index++]=i;
		 }
	 }
	 return;
	 
}
int main() {
	int n;
	ll p[1000005]={0};
	int t;
	cin>>t;
	seive(p);
	for(int i=0;i<t;i++)
	{
	cin>>n;
	
	cout<<primearray[n-1]<<endl;
	}
	return 0;
}