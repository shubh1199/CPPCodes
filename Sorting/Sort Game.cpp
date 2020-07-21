#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
bool compare(pair<string,int> p1,pair<string,int> p2){
    int a=p1.second;
    int b=p2.second;
    if(p1.second==p2.second)
    {
        return p1.first<p2.first;
    }
        return p2.second<p1.second;
}
int main() 
{
    int key,n;
    cin>>key>>n;

    vector <pair<string,int>> v;
    for(int i=0;i<n;i++){
        string name;
        int sal;
        cin>>name;
        cin>>sal;
        v.push_back(make_pair(name,sal));
    }
    
    sort(v.begin(),v.end(),compare);
     for (auto i=v.begin(); i!=v.end(); i++) 
    { 
        if(i->second >=key)
        cout << i->first << " "
             << i->second << endl; 
    } 
    
    return 0;
}