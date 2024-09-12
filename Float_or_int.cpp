#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int flg = 0,ans = 0;
    string pt = "";
    for(int i=0;i<l;i++)
    {
        if(s[i]=='.') flg = 1;
        else if(flg==1&&s[i]!='0'){
            ans  = 1;
            pt = pt + s[i];
        }
        else if(flg==1){
            pt = pt + s[i];
        }
    }
    if(ans==1) cout<<"float "<<stoi(s)<<" 0."<<pt<<endl;
    else cout<<"int "<<stoi(s)<<endl;
}
/**
problem source : 
https://vjudge.net/problem/Gym-287306T
*/
