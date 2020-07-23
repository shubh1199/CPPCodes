#include<iostream>
#define ll long
using namespace std;
void seive(ll p[86028122], ll n){
     for(ll i=3;i<86028122;i=i+2){
		 p[i]=1;
	 }
	 for(ll i=3;i<86028122;i=i+2){
		 if(p[i]==1){
			 for(ll j=i*i;j<86028122;j=j+i){
				 p[j]=0;
			 }
		 }
	 }
	 p[0]=p[1]=0;
	 p[2]=1;
	 int count=0;
	 for(ll i=2;i<86028122;i++){
		 if(p[i]==1){
			 count++;
		 }
		 if(count==n){
			 cout<<i<<endl;
			 break;
		 }
	 }
}
int main() {
	ll n;
	ll p[86028122]={0};
	cin>>n;
	seive(p,n);
	return 0;
}