/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for (int i=1;i<=n;i++){//1,2,3,4
    for (int j=1;j<=n-i;j++){//(1,
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  for (int i=n;i>=1;i--){//1,2,3,4
    for (int j=1;j<=n-i;j++){//(1,
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
