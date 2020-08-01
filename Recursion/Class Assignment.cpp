#include<iostream>
using namespace std;

int main() {
  int arr[26];
  arr[0]=1;
  arr[1]=2;
  for(int i=2;i<26;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }

  int t; cin>>t;
  for(int l=0;l<t;l++){
    int n;
    cin>>n;
    cout<<"#"<<l+1<<" : "<<arr[n]<<endl;
  }
  return 0;
}