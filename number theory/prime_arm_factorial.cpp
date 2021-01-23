#include<iostream>
#include<cmath>
using namespace std;

void checkprime(int n){
  bool flag=true;
  for (int i=2;i<sqrt(n);i++){
    if (n%i==0){
    flag=false;
    break;
}}
  if (flag)
  cout<<"Prime"<<endl;
  else
  cout<<"not prime"<<endl;
}
void right_to_left(int n){
  int rem;
  while(n>0){
    rem =n%10;
    n=n/10;
    cout<<rem<<" ";
} cout<<endl;
}
void chk_palindrome_arms(int n){
  int temp=n,rem,arm=0,rev=0,i=0;
  while(n>0){
    rem =n%10;
    rev =rev*10+rem;
    n=n/10;
    i++;
  }
  cout<<"reversed no:"<<rev<<endl;
  if (temp==rev)
  cout << "Yes palindrome" << '\n';
  else
  cout<<"No palindrome"<<'\n';
  n=temp;
  while(n>0)
  {
    rem=n%10;
    arm=arm+(rem*rem*rem);
    n=n/10;
  }
  cout<<"arms no:"<<arm<<endl;
  if (temp==arm)
  cout << "Yes armstrong" << '\n';
  else
  cout<<"No armstrong"<<'\n';
}

int main()
{int x,y,z;
  cout<<"check prime:";
  cin>>x;
  checkprime(x);
  cout<<"left to right:";
  cin>>y;
  right_to_left(y);
  cout<<"check palindrome and armstrong";
  cin>>z;
  chk_palindrome_arms(z);
return 0;
}
