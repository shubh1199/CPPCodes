#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
    return a>b;
}
bool check0(int n, int arr[]){
    for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
            return false;
        }   
    }
    return true;
}
bool check(int n, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            for(int j=i;j<n-1;j++){
                if(arr[j]>=arr[j+1]){
                    return false;
                }
            }
        }
    }
    return true;
}
bool check2(int n, int arr[], int arr1[]){
sort(arr1,arr1+n);
for(int i=0;i<n;i++){
    if(arr1[i]!=arr[i]){
        return false;
    }
}
return true;
}
bool check3(int n, int arr[], int arr1[]){
    sort(arr1,arr1+n,compare);
    for(int j=0;j<n;j++){
            if(arr1[j]!=arr[j]){
                return false;
            }
        }
        return true;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    if(check0(n,arr)){
    if(check(n,arr)==true || check2(n,arr,arr1)==true || check3(n,arr,arr1)==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }}
    else{
        cout<<"False";
    }
    return 0;
}