#include<iostream>
using namespace std;

void selectionSort(int arr[100], int n){

    for (int i = 0; i < n-1; ++i)
    {
        int minidx = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if(arr[minidx] > arr[j]){
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
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
    selectionSort(arr,n);   
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<endl;
    }
  return 0;