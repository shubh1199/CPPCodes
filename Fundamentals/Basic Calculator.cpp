#include <iostream>

using namespace std;

int main()
{   int n1,n2;
    char ch;
    do{
        cin>>ch;
        if(ch=='x' || ch=='X'){
            return 0;
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%'){
            cin>>n1>>n2;
            switch(ch){
            case '+':cout<<n1+n2<<endl;
            break;
            case '-':cout<<n1-n2<<endl;
            break;
            case '*':cout<<n1*n2<<endl;
            break;
            case '/':cout<<n1/n2<<endl;
            break;
            case '%':cout<<n1%n2<<endl;
            break;
            default: cout<<"Invalid";
            break;
            }
        }
        else{
            cout<<"Invalid operation. Try again."<<endl;
        }
    }
        while(ch!='x' || ch!='X' || ch!='+' || ch!='-' || ch!='*' || ch!='/' || ch!='%');

}
