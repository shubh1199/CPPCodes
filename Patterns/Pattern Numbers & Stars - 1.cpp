#include <iostream>

using namespace std;

int main()
{
    int n,i,s;
    cin>>n;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i+1;s++){
            cout<<s<<" ";
        }
        for(s=n-i+2;s<=n;s++){
            cout<<"* ";
            }
        for(s=n+1;s<=n+i-2;s++){
            cout<<"* ";
        }
    cout<<endl;
    }
}
