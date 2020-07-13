#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int row=1;row<=n;row++){
for(int column=1;column<=row;column++){
    cout<<column;
}
for(int i=1;i<=n-row;i++){
    cout<<"*";
}
cout<<endl;
}
return 0;
}