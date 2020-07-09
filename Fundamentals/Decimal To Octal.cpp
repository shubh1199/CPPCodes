#include<iostream>
using namespace std;
int main() {
    int N;
    int arr[100]={0};
    cin>>N;
    int rem;
    int count=0;
    int i=0;
    while(N>0){
        rem=N%8;
        N=N/8;
        count++;
        arr[i]=rem;
        i++;
        }
        for(int j=count-1;j>=0;j--){
            cout<<arr[j];
        }

    return 0;
}