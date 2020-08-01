#include <bits/stdc++.h>
    #include<vector>
    using namespace std;
    string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
    string searchIn [] = {
                "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
                "utkarsh", "divyam", "vidhi", "sparsh", "akku"
        };
    vector<string>v;
    void func(string s,string temp)
    {
        if(s.size()==0)
        {
            v.push_back(temp);
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
    bool found(string s, string a){
        size_t found = s.find(a);
    if (found!=string::npos){
        return true;
    }
    else{
        return false;
    }
    }

    int main() {
        string s;
        cin>>s;
        func(s,"");
        for(auto it=v.begin();it!=v.end();it++){
             for(int ti=0;ti<10;ti++){
                 if(found(searchIn [ti],*it)){
                     cout<<searchIn [ti]<<endl;
                 }
             }
        }
        return 0;
        
    }