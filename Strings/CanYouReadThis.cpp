#include<iostream>
#include<cstring>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i=0;s[i]!='\0';i++){
    if(s[i+1]>='A' && s[i+1]<='Z'){
      cout<<s[i]<<endl;
    }
    else{
      cout<<s[i];
    }
  }
}
