#include<iostream>
#include<cstring>
#include <cmath>
using namespace std;
int main() {
    int n,m,k=0,l=0;
    int t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        k+=pow(10,n-1-i)*arr[i];
    }

    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        l+=pow(10,m-1-i)*arr2[i];
    }
    
    int num=k+l;
    int temp1,count=0;
    temp1 = num;
    
    while(temp1 != 0) {
        count++;
        temp1 /= 10;
    }
    
    int result[count];
    for(int i=0;i<count;i++){
        t=pow(10,count-1-i);
        result[i]=num/t;
        num=num%t;
        cout<<result[i]<<", ";
    }
    cout<<"END";

    return 0;
}