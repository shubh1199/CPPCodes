#include<iostream>
using namespace std;
#include<cstring>
void strin(string s,int i){
int p=s.length();
if(i>p){
    return;
}
if(s[i]!=s[i-1]){
cout<<s[i];
}
strin(s,i+1);
}
int main(){
string s;
cin>>s;
strin(s,0);
return 0;
}