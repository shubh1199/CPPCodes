#include<bits/stdc++.h>
using namespace std;

//function to check if the element at a particular index should not be the part of more than one CB number:
bool shouldcheck(bool *v,int i,int j){
    for(int k=i;k<=j;k++)
        if(v[k])
            return false;
    return true;
}

//Rather create an array:
int arr[]={2,3,5,7,11,13,17,19,23,29};

bool is_prime(int num)
{
  if(num==0 || num==1)
  return false;
    
    for(int i=0;i<10;i++){
        //Point 2:
        if(num==arr[i])
            return true;
        //Point 3:
        else if(num%arr[i]==0)
            return false;
    }
  return true;
}
int main()
{
  int size;
  cin>>size;
  string s;
  cin>>s;
  bool visited[size]={false};
  int count=0;

    for(int i=0;i<size;i++)
  {
       
        for(int j=0;j<size-i;j++)
      {        

            long long num=0;
        
            for(int k=j;k<=j+i;k++){
                num=num*10+(s[k]-'0');
            }

             if(is_prime(num) && shouldcheck(visited,j,j+i))
       {
             count++;

             for(int k=j;k<=j+i;k++)
          visited[k]=true;
       }
      }
  }
  cout<<count;
}