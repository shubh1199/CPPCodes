#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int last_digit;
while(n>0){
last_digit=n%10;
cout<<last_digit;
n=n/10;
}
return 0;
}