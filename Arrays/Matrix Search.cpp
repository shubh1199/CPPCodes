#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key,flag=0;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i][0]<key<arr[i][m-1]){
            for(int j=0;j<m;j++){
                if(arr[i][j]==key){
                    flag=1;
                }
            }
        }
    }
    cout<<flag;
    return 0;
}