#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    for(int j=0;j<q;j++){
        int k;
        cin>>k;
        bool check=false;
        for(int i=0;i<n;i++){
            if(arr[i]==k && arr[i-1]<k){
                cout<<i<<" ";
                check=true;
            }
            if(arr[i]==k && arr[i+1]>k){
                cout<<i;
                check=true;
            }
            if(arr[i]>k){
                break;
            }
        }
        if(check==false){
            cout<<-1<<" "<<-1;
        }
        cout<<endl;
    }
    return 0;
}