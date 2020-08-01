#include <iostream>
#include<cstring>
using namespace std;
string movextoend(string str){
    if(str.length()==0){
        return"";
  }
    char ch = str[0];
    string ros = str.substr(1);
    string recursion_result = movextoend(ros);
    
       if (ch=='x'){
           return recursion_result + ch;
       }
       else{
           return ch + recursion_result;
       }
       
}
int main() {
  string s;
  cin>>s;
      cout<<movextoend(s)<<endl;
    return 0;
}