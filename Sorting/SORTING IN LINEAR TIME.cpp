#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n;
    int arr[n]={0};
    int j=0;
    int count=0;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(d==0){
           arr[j]=0;
           count++;
           j++;
        }
        if(d==2){
           arr[t-1]=2;
           t--;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0 && i>=count){
            arr[i]=1;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}