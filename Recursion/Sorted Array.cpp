#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n]={0};
    bool sorted=true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
    if(sorted==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}