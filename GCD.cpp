#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int c;
    if(a<b)
    {
        a=b;
        b=c;
        c=a;
    }
    if(b==0)
    {
        return a;
    }
    if(b!=0)
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD("<<a<<","<<b<<") = "<<gcd(a,b);
}
