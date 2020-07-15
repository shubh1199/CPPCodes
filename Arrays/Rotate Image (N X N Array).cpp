#include<iostream>
using namespace std;
int main() {
    int n,temp,i,j;
    cin>>n;
    int a[n][n];
    int t[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            t[j][i]=a[i][j];
        }
    }
    for(j=0;j<n;j++){
    int le=n-1;  // now j will point to the last element
    int fe=0;   //  and i will be point to the first element
    while(fe<le)
    {
        temp=t[fe][j];
        t[fe][j]=t[le][j];
        t[le][j]=temp;
        fe++;
        le--;
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}