#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;

    int s = (a*b*c*d)%100;

    if(s<10) cout<<0;
    cout<<s<<endl;
    //ll s = a*b*c*d;

    //int n = s%10;

    //s = s/10;

    //int u = (s%10)*10 + n;

    //cout<<u<<endl;

    //string t = to_string(s);
    //int l = t.length();
    //cout<<t[l-2]<<t[l-1]<<endl;

}
/**
 Problem Source : https://vjudge.net/problem/Gym-287306X
 Summary of this problem is : A,B,C,D are all of them integers (2<=A,B,C,D<=10^9)
 let assume x = A*B*C*D;
 find out the last 2 digits of x.
*/
