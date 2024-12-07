#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x = 2;
  /// int *y = x this can not be written cause pointer always store the address of a variable 
  int *y = &x ; /// this is correct way of declering the pointer cause here it stores the address of x variable. and the address of y is different from the address x 

  cout<<x<<endl; /// value of x
  cout<<&x<<endl; /// address of x
  cout<<&y<<endl;   /// address of y
  cout<<*y<<endl;  ///it will give a value which address the pointer stores... here the value is 2 cause x = 2;
  
  
}
