#include<iostream>
using namespace std;


bool ispossible(long long curr,long long n,long long m,long long x,long long y){
    long long needed=curr*x;
    long long coupons=m+((n-curr)*y);
    return needed<=coupons;
}
int main() {
    long long n,m,x,y;
    cin>>n>>m>>x>>y;
    long long s=0;
    long long e=n;
    long long ans=0;
    while(s<=e){
        long long mid=(s+e)/2;
        if(ispossible(mid,n,m,x,y)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
    return 0;
}