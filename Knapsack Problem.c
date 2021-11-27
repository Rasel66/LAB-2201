#include<stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int function(int w,int value[],int weight[],int n)
{
    if(n==0||w==0)
    {
        return 0;
    }
    if(weight[n-1]>w)
    {
        function(w,value,weight,n-1);
    }
    else
    {
        return max(value[n-1]+function(w-weight[n-1],value,weight,n-1),function(w,value,weight,n-1));
    }
}
int main()
{
    int value[]={25,24,15};
    int weight[]={18,15,10};
    int w = 20;

    int n= sizeof(value)/sizeof(value[0]);
    printf("The maximum profit is: %d\n",function(w,value,weight,n));

    return 0;
}
