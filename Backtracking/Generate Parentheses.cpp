#include <iostream>
#include<string>
using namespace std;
void generate_bracket(string ans,int ob,int cb, int n)
{
//BASE CASE:
    //When all the brakets have been inserted:
    if(cb==n){
        cout<<ans<<"\n";
        return;
    }
    
//Recursive case 1:
    //When opening brackets are more than the closing brackets:
    if(ob>cb){
        generate_bracket(ans+')',ob,cb+1,n);
    }

//Recursive case 2:
    //When opening brackets are more:
    if(ob<n){
        generate_bracket(ans+'(',ob+1,cb,n);
    }
}

int main() {
int n;
cin>>n;
string ans="";
generate_bracket(ans,0,0,n);
}