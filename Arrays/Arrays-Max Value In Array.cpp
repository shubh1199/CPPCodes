#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    int t=0;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    t=arr[0];
    for(i=1;i<n-1;i++){
        if(t<=arr[i]){
            t=arr[i];
        }
    }
    cout<<t;
}
