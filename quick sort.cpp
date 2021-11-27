#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = (low-1);

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot = partition(arr,low,high);

        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"Sorted array: \n";
    print(arr,n);
}
