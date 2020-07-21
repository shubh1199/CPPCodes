#include<iostream>
using namespace std;

void bubbleSort(int arr[100], int n){

    for (int j = 0; j < n-1; j++)
    {   
        bool isSorted = true; //optimization
        for (int i = 0; i < n-j-1; ++i)
        {   
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                isSorted = false;
            }
        }

        if( isSorted == true){
            break;
        }
    }
        for (int i = 0; i < n; ++i)
        {
            cout<<arr[i]<<endl;;
        }


}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);  
    
  return 0;
}