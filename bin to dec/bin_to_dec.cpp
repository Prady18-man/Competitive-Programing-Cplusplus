#include<iostream>
using namespace std;

int main()
{

  int rem,sum=0,n,i=1;
  cin>>n;
while(n>0){
  rem=n%10;
  sum=sum+rem*i;
  n=n/10;
  i=i*2;
}
cout<<sum;
return 0;
}
