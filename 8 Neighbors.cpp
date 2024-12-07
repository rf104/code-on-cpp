///problem statement link is : https://vjudge.net/problem/Gym-287310X


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    string a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int x,y;
    cin>>x>>y;

    int f = 0;

    ///up
    if(x-2<n&&x-2>=0)
    {
        if(a[x-2][y-1]=='.') f = 1;
    }
    ///down
    if(x<n&&x>=0)
    {
        if(a[x][y-1]=='.') f = 1;
    }
    ///left
    if(y-2<m&&y-2>=0)
    {
        if(a[x-1][y-2]=='.') f = 1;
    }
    ///right
    if(y<m&&y>=0)
    {
        if(a[x-1][y]=='.') f = 1;
    }
    ///urc
    if(x-2<n&&x-2>=0)
    {
        if(a[x-2][y]=='.') f = 1;
    }
    ///ulc
    if(x-2<n&&x-2>=0&&y-2<m&&y-2>=0)
    {
        if(a[x-2][y-2]=='.') f = 1;
    }
    ///drc
    if(x<n&&y<m)
    {
        if(a[x][y]=='.') f = 1;
    }
    ///dlc
    if(y-2<m&&y-2>=0){
        if(a[x][y-2]=='.') f = 1;
    }

    if(f==1) cout<<"no\n";
    else cout<<"yes\n";


    //for(int i=0;i<n;i++) cout<<a[i]<<endl;
}
