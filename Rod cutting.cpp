#include<iostream>
using namespace std;
int rodCut(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    int maxValue= INT_MIN;

    for(int i=1;i<=n;i++)
    {
        int cost = arr[i-1]+rodCut(arr,n-i);

        if(cost>maxValue)
        {
            maxValue=cost;
        }
    }
    return maxValue;
}
int main()
{
    int p,n;
    cout<<"Enter the number of prices: \n";
    cin>>p;
    cout<<"Enter rod length: ";
    cin>>n;
    int arr[p];
    cout<<"Enter prices: \n";

    for(int i=0;i<p;i++)
    {
        cin>>arr[i];
    }

    cout<<"Profit is: "<<rodCut(arr,n);

    return 0;
}
