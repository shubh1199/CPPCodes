#include <iostream>

using namespace std;

int main()
{
    int n,i,s;
    cin>>n;

    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }

        if(i==1 or i==n){
        for(s=n-i;s<(2*n-i);s++){
            cout<<"*";
        }
        }
        else{
            for(s=n-i;s<(2*n-i);s++){
                if(s==n-i or s==(2*n-i)-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            }
        cout<<endl;
        }
}