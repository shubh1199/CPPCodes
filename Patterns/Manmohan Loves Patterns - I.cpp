#include <iostream>

using namespace std;

int main()
{ int n,i,s;
cin>>n;
for(i=1;i<=n;i++){
        if(i%2==0){
    for(s=1;s<=i;s++){
        if(s==1 or s==i){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
}
else{

    for(s=1;s<=i;s++){
        cout<<"1";
    }
}
cout<<endl;
}
}