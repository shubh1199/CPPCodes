#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<(n+1)/2;i++){
        int j;
        for(j=0;j<((n+1)/2)-i;j++){
            cout<<"*    ";
        }
        for(j=((n+1)/2)-(i-1);j<=(n+1)/2 + (i-1);j++){
            cout<<"     ";
        }
        if(i==0){
            for(j=((n+1)/2)+1;j<=n;j++){
                cout<<"*    ";
            }
        }
        else{
        for(j=((n+1)/2)+(i-1)+1;j<=n;j++){
        cout<<"*    ";
        }
        }

    cout<<endl;
    }

    for(int i=((n+1)/2)-2;i>=0;i--){
        int j;
        for(j=0;j<((n+1)/2)-i;j++){
            cout<<"*    ";
        }
        for(j=((n+1)/2)-(i-1);j<=(n+1)/2 + (i-1);j++){
            cout<<"     ";
        }
        if(i==0){
            for(j=((n+1)/2)+1;j<=n;j++){
                cout<<"*    ";
            }
        }
        else{
        for(j=((n+1)/2)+(i-1)+1;j<=n;j++){
        cout<<"*    ";
        }
        }

    cout<<endl;
    }


    return 0;
}