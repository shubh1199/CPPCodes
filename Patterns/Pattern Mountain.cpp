#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int r=n;
int space=3;
if(n==3){
    space=3;
}
while(r>3){
    space=space+2;
    r=r-1;
}
for(int row=1;row<n;row++){
    for(int column=1;column<=row;column++){
      cout<<column<<" ";
    }
int i=1;
while(i<=space){
    cout<<"  ";
    i++;
}
for(int column=row;column>=1;column--){
    cout<<column<<" ";
}
space=space-2;
cout<<endl;
    }
int i=n;
if(i==n){
    for(int column=1;column<=n;column++){
        cout<<column<<" ";
    }
    for(int column=n-1;column>=1;column--){
        cout<<column<<" ";
    }
}


return 0;


}