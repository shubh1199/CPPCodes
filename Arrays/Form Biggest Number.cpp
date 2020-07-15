#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int mycompare(string a,string b)
{
    return a+b > b+a;
}
int main() {
    int t;
    cin>>t;
    while(t!=0)
    {
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    cin>>str[i];
    sort(str,str+n,mycompare);
    for(int i=0;i<n;i++)
    cout<<str[i];
    cout<<endl;
    t--;
    }
}