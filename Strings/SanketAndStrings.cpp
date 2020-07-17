#include <iostream>
#include<cstring>
using namespace std;

int main()
{   int k;
     cin>>k;
    string str;
    cin>>str;
    int left=0,i=0,ans=0;
    int n=str.length();
    int count[2]={0};
    while(i<n){
       count[str[i]-'a']++;
       if(min(count[0],count[1])>k){
        count[str[left]-'a']--;
        left++;
       }
       else{
        ans++;
       }
       i++;
    }
    cout<<ans;
}