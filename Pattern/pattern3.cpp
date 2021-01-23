#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i=1; i<=n;i+=1){
    for (int j=1;j<=i;j+=1){
      if ((j+i)%2==0)
      cout << " 1 ";
      else
      cout << " 0 ";
    }
    cout << endl;
  }
  return 0;
}

/*
1
0  1
1  0  1
0  1  0  1
1  0  1  0  1

*/
