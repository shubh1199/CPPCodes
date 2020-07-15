#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    int arr[n],ar[3];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int g=j+1;g<n;g++){
                if(arr[i]+arr[j]+arr[g]==k){
                    ar[0]=arr[i];
                    ar[1]=arr[j];
                    ar[2]=arr[g];
                    sort(ar,ar+3);
                    cout<<ar[0]<<", "<<ar[1]<<" and "<<ar[2]<<endl;
                }
            }
        }
    }
}