#include<iostream>
using namespace std;

int main()
{
  int n,rem[50],i=0;
  cin>>n;
while(n>0){
  rem[i]=n%2;
  n=n/2;
  i++;
}
for (int j=i-1;j>=0;j--)
cout<<rem[j];
return 0;
}
