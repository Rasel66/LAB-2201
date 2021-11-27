#include<iostream>
using namespace std;
int mcm(int arr[], int n)
{
    int arr1[n][n];
    int i,j,k,L,q;

    for(i=1;i<n;i++)
    {
        arr1[i][i]=0;
    }
    for(L=2;L<n;L++)
    {
        for(i=1;i<n-L+1;i++)
        {
            j=i+L-1;
            arr1[i][j]= INT_MAX;

            for(k=i;k<=j-1;k++)
            {
                q=arr1[i][k]+arr1[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q<arr1[i][j])
                {
                    arr1[i][j] = q;
                }
            }
        }
    }
    return arr1[1][n-1];
}
int main()
{
    int i,n;
    cout<<"Enter the number of matrices: \n";
    cin>>n;
    n++;
    int arr[n];
    cout<<"Enter dimensions: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum cost is: "<<mcm(arr,n);
}
