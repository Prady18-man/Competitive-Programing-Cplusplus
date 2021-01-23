/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main()
{
  int n,j;
  cin >> n;
  for (int i=1; i<=n;i++){ // for rows 1 to n
    for ( j=1;j<=n-i;j++){ //  for colm 1 to n-i (for printing space)
      cout <<"  ";
    }
    int k =i; // for printing the  number (using  row no.)
    for (;j<=n;j++)
    {
    cout <<k--<<" ";} // no. are decreasing (row no starts to decrese to 1)
    k=2;// k set to 2 then will increase
    for(;j<=n+i-1;j++){//colmn to be iter to n+1-i
    cout <<k++<<" ";}//k increse till i
    cout <<endl;
}
return 0;
}
