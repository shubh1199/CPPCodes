#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(d%2==0){
        v.push_back(d);
        }
        else{
            v.insert(v.begin()+count,d);
            count++;
        }
    }
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}