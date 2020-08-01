#include<iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  //char str1[3]={'.','1','4'};
  for(int k=0;k<n;k++){
    char str[1000];
    cin>>str;
    for(int i=0;str[i]!=0;i++){
      if(str[i]=='p' && str[i+1]=='i'){
        cout<<"3.14";
        i++;
      }
      else{
        cout<<str[i];
      }
        }
    cout<<endl;
  }
  return 0;
}