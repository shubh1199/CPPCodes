#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    while(1>0){
        int d;
        cin>>d;
        if(d==-1){
            break;
        }
        else{
        v.push_back(d);
        }
    }
    int flag=0;
    for(auto i=v.begin();i!=v.end();i++){
        for(auto j=i+1;j!=v.end();j++){
            if(*i==*j){
                v.erase(j,v.end());
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}