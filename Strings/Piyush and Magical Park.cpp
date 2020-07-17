#include <iostream>

using namespace std;

int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;

    char arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
     }
      
    for(int i=0;i<n;i++)
    {
          //int sti=s;
        for(int j=0;j<m;j++)
    {
      if(s<k){
        break;
      }
                //int stj=sti;
            if(arr[i][j]=='.')
      {
                s=s-2;
      }
             if(arr[i][j]=='*')
       {
                s=s+5;
       }
        if(arr[i][j]=='#')
    {
      break;
    }
    if(j<m-1)
        {
                    s=s-1;
                }
     }
    }
     
   if(s>=k)
   {
        cout<<"Yes"<<endl<<s;
     }
     else{
        cout<<"No";
     }

}