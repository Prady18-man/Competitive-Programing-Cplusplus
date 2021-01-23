#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i=1; i<=n;i+=1){
      int space =n-i;
      for (int k=1;k<=space;k+=1){
        cout <<" ";
      }
      for (int j=1;j<=i;j+=1){
      cout<<j<<" ";
    }
    cout << endl;
  }
  return 0;
}


/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
