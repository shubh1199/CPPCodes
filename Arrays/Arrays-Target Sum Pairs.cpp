#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==t){
                cout<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}