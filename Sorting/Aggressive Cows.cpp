#include<iostream>
#include<algorithm>
using namespace std;
bool cowsplaced(int stalls[],int n,int c, int min){
    int last_cow=stalls[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(stalls[i]-last_cow>=min){
            last_cow=stalls[i];
            count++;
            if(count==c){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int n,c;
    cin>>n>>c;
    int stalls[n];
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    sort(stalls,stalls+n);

    int s=0;
    int e=(stalls[n-1]-stalls[0]);
    int ans=0;
    while(e>=s){
        int mid=(s+e)/2;
        bool cowsrakhdi=cowsplaced(stalls,n,c,mid);
        if(cowsrakhdi){
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