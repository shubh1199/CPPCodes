#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;

    for(i=1;i<=n+1;i++){
        if(i<=n){
        for(j=1;j<=i;j++){
            cout<<n-j+1<<" ";
        }
        for(j=i+1;j<=(2*n+1)-i;j++){
            cout<<"  ";
        }
        for(j=(2*n)-i+2;j<=(2*n)+1;j++){
            cout<<j-(n+1)<<" ";
        }

    }
    else{
        for(j=1;j<=n+1;j++){
            cout<<n-j+1<<" ";
        }
        for(j=n+2;j<=(2*n)+1;j++){
            cout<<j-n-1<<" ";
        }
    }
    cout<<endl;
    }

    for(i=n+2;i<=(2*n)+1;i++){
        for(j=1;j<=(2*n)-i+2;j++){
            cout<<n-j+1<<" ";
        }
        for(j=(2*n)-i+3;j<=i-n+4;j++){
            cout<<"  ";
        }
        for(j=i;j<=(2*n)+1;j++){
            cout<<j-(n+1)<<" ";
        }
        cout<<endl;
    }
}
