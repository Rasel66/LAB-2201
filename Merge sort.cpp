#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';    }
}
void mergeSort(int arr[],int first,int mid,int last)
{
    int i,j,k=0;
    int temp[200];
    i=first;
    j=mid+1;
    while(i<=mid && j<=last)
    {
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=last)
        temp[k++]=arr[j++];

    for(i=first,j=0;i<=last;i++,j++)
    {
        arr[i]=temp[j];
    }
}
void mergeSort(int arr[],int first,int last)
{
    if(first>=last)
        return;
    else
    {
        int mid = (first+last)/2;

        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);

        mergeSort(arr,first,mid,last);
    }
}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    print(arr,n);
}
