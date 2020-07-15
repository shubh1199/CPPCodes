#include <iostream>

using namespace std;

int main()
{
    int n,i,arr[50];
    int left[50]={0};
    int right[50]={0};
    int water, twater=0;

    cin>>n;

    for (i=0;i<n;i++){
        cin>>arr[i];
    }

    //Left Array
    left[0]=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>left[i-1]){
            left[i]=arr[i];
        }
        else{
            left[i]=left[i-1];
        }
       }

    //Right Array
    right[n-1]=arr[n-1];
    for(i=n-1;i>=0;i--){
        if(arr[i]>right[i+1]){
            right[i]=arr[i];
        }
        else{
            right[i]=right[i+1];
        }
    }

    /*for(i=0;i<n;i++){
        cout<<left[i]<<"  ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<right[i]<<"  ";
    }*/

    for(i=0;i<n;i++){
        water=min(left[i],right[i])-arr[i];
        twater+=water;
    }
   cout<<twater<<endl;

}