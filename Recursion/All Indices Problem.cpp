#include<iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        cin>>k;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                cout<<i<<" ";
            }
        }
    return 0;
}