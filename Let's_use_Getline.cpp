/*
Question :Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s). 
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S will contain '\' symbol.


  */



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s,'\\');
    cout<<s<<endl;
}
