#include <iostream>

using namespace std;

int main()
{
    int n,i,s;
    cin>>n;

    for(i=1;i<=n;i++){

        if(i==1){
            for(s=1;s<=n;s++){
                if(s==1 or s==(n+1)/2){
                    cout<<"*";
                }
                else if(s!=1 and s<(n+1)/2){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }




        else if(i>1 and i<(n+1)/2){
        for(s=1;s<=(n+1)/2;s++){
            if(s==1){
                cout<<"*";
            }
            else if(s>1 and s<(n+1)/2){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        }



         else if(i==(n+1)/2){
            for(s=1;s<=n;s++){
                cout<<"*";
                }
        }



        else if(i>(n+1)/2 and i<n){
            for(s=1;s<=n;s++){
                if(s==(n+1)/2){
                cout<<"*";
            }
            else if(s==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
        }


        else{
            for(s=1;s<=n;s++){
                 if(s==n){
                    cout<<"*";
                }
                else if(s<=(n+1)/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }



        cout<<endl;
    }

}