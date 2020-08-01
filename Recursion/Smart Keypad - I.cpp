#include<iostream>
#include<cstring>
using namespace std;
  string table[]={ " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void func(string s,string temp)
{
  if(s.size()==0)
  {
    cout<<temp<<endl;
    return;
    
  }
  // return;
  for(int i=0;i<table[s[0]-48].size();i++)
  {
    string next=temp;
    next+=table[s[0]-48][i];
    func(s.substr(1),next);
  }
}
int main() {
  string s;
  cin>>s;
  func(s,"");
  return 0;
}