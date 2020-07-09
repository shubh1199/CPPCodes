#include <iostream>
using namespace std;
int main()
{
    int a,i;
    int isprime=true;
    cin>>a;
    for(i=2;i<=(a-1);i++){
        if(a%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==false){
        cout<<"Not Prime"<<endl;
    }
    else{
    cout <<"Prime"<<endl;
    }
}