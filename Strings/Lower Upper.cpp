#include<iostream>
using namespace std;
int main() {
  char ch;
  char A='A', Z='Z', a='a', z='z';
  cin>>ch;
  if(A<=ch&&ch<=Z){
    cout<<"UPPERCASE";
  }
  else if(a<=ch&&ch<=z){
    cout<<"lowercase";
  }
  else{
    cout<<"Invalid";
  }
  return 0;
}