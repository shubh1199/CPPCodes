#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool com(string a,string b){
    if(a.substr(0, b.size()).compare(b) == 0){
return a.length()>b.length();
    }
    else{
        return a<b;
    }
}

int main() {
    int n,i;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    stable_sort(arr,arr+n,com);
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}