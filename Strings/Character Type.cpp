#include<iostream>
using namespace std;
int main() {
  char ch;
  char A='A', Z='Z', a='a', z='z';
  cin>>ch;
  if(A<=ch&&ch<=Z){
    cout<<"U";
  }
  else if(a<=ch&&ch<=z){
    cout<<"L";
  }
  else{
    cout<<"I";
  }
  return 0;
}