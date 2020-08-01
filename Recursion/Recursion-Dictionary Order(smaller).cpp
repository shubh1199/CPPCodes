#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string>v;
void print(string s,string out, int idx){
    if(out[idx]=='\0' && out < s){
        v.push_back(out);
        return;
    }
    for(int pos=idx;out[pos]!='\0';pos++){
        swap(out[pos],out[idx]);
        print(s,out,idx+1);
        swap(out[pos],out[idx]);
    }
}

int main(){
    string s;
    string out;
    cin>>s;
    out=s;
    print(s,out,0);
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
}