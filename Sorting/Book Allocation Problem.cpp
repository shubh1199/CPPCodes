#include<iostream>
using namespace std;
bool right(int mid,int c,int*arr,int n)
{
   int students=1;
      int curr=0;
    for(int i=0; i<n; i++)
    {
     if(curr+arr[i]>mid){
        curr=arr[i];
        students++;

     if(students>c){
        return false;
     }
     }
     else{
        curr+=arr[i];
     }
    }
    return true;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c;
        cin>>n>>c;
        int arr[n];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int s=arr[n-1];
        int e=sum;
        int ans=0;
        while(s<=e)
        {
            int mid=(s+e)/2;
            bool is=right(mid,c,arr,n);
//        cout<<endl<<endl;
//        cout<<mid<<" "<<is<<endl;

            if(is)
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}