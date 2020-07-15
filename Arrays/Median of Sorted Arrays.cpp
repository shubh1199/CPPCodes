#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n],arr1[n];
    int ar[2*n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ar[i]=arr[i];
    }
    int j=n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        ar[j]=arr1[i];
        j++;
    }
    sort(ar,ar+(2*n));
        cout<<ar[n-1];

    return 0;
}