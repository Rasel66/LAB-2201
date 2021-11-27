#include<iostream>
using namespace std;
void maxMin(int arr[],int low, int high,int &min,int &max)
{
    if(low==high)
    {
        if(max<arr[low])
        {
            max=arr[low];
        }
        if(min>arr[high])
        {
            min=arr[high];
        }
        return;
    }
    if(high-low==1)
    {
        if(arr[low]<arr[high])
        {
            if(min>arr[low])
            {
                min=arr[low];
            }
            if(max<arr[high])
            {
                max=arr[high];
            }
        }
        else
        {
            if(min>arr[high])
            {
                min=arr[high];
            }
            if(max<arr[low])
            {
                max=arr[low];
            }
        }
        return;
    }
    int mid = (low+high)/2;

    maxMin(arr,low,mid,min,max);
    maxMin(arr,mid+1,high,min,max);
}
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;

    maxMin(arr,0,n-1,min,max);

    cout<<"The minimum array elements is: "<<min<<endl;
    cout<<"The maximum array elements is: "<<max<<endl;
}
