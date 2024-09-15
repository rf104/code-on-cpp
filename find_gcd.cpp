#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b%a==0) return a;
    int temp = a;
    a = b%a;
    b = temp;
    gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int l = gcd(a,b);
    cout<<l<<endl;
}
