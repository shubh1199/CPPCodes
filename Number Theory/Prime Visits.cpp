#include<iostream>
#define ll long
using namespace std;
void seive(int p[1000005]){
    for(ll i=3;i<1000005;i=i+2){
        p[i]=1;
    }
    for(ll i=3;i<1000005;i=i+2){
        if(p[i]==1){
            for(ll j=i*i;j<1000005;j=j+i){
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[0]=p[1]=0;
}
int main(){
    int p[1000005]={0};
    seive(p);
    int csum[1000005]={0};
    for(ll i=1;i<1000005;i++){
        csum[i]=csum[i-1]+p[i];
    }
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    ll n,m;
    cin>>m>>n;
    cout<< csum[n] - csum[m-1] <<endl;
    }