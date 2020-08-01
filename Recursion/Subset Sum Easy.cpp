#include<iostream>
#include<cmath>
using namespace std;
bool allPossibleSubset(int arr[],int n)
{
    int check=0,c=1;
    int  count = pow(2,n);
    for (int i = 1; i < count; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) > 0){
                check=check+arr[j];
                }
        }
            if(check==0){
            c=0;
            cout<<"Yes"<<endl;
            break;
        }
        check=0;
    }
    if(c==1){
        cout<<"No"<<endl;
    }
}
int main(){
    int t,n;
    cin>>t;
    for(int l=0;l<t;l++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

allPossibleSubset(arr,n);
    }
    return 0;
}