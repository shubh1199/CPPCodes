#include<iostream>
using namespace std;
int main() {
    int n,i,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int j=1;
    for(i=(n-1);i>=0;i--){
        if(arr[i]==k){
            cout<<i;
            j=0;
            break;
        }
    }
    if(j==1){
        cout<<"-1";
    }
    return 0;
}