#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int convert(string s){
    int l=s.length();
    int ans=0;
    for(int i=0;i<l;i++){
        ans=ans+((s[i]-'0')*(pow(10,l-1-i)));
    }
    cout<<ans;
}
int main() {
    string s;
    cin>>s;
    cout<<s;
}