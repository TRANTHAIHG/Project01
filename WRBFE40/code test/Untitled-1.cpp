#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int tongchan(int n)
{
 int i=0;
 int tong=0;
 while(i<=n)
 {
  tong=tong*i;
  i=i+1;
 }
 return tong;
}
int main()
{
 int n;
 cout<<" nhap vao so n: "; cin>>n;
 cout<<" tich cac so chan tu 1 den n la: "<<tongchan(n);
 getch();
 return 0;
}