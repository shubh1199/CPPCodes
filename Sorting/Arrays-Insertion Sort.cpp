#include<iostream>
using namespace std;

void insertionSort(long long int arr[1000000], long long int n){

    int key, j;

    for (int i = 1; i <= n-1 ; ++i)
    {
        key = arr[i];
        j = i-1;

        while( j >= 0 && arr[j] > key ){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

}
int main()
{
    long long int arr[1000000];
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);   
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
  return 0;
}