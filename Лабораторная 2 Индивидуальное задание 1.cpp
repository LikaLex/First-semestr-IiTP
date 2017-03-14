#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
cout<<"Vyberite znachenie j(x)  1)j(x)=2x, 2)j(x)=x^2, 3)j(x)=x/3"<<'\n' ;
int a;
float x,j;
cin>>a;
switch(a)
{
case 1: j=2*x; break;
case 2: j=x*x; break;
case 3: j=x/3; break;
default: cout<<"Neverno, Nado bylo vvesti 1,2 ili 3"; getch(); return 0;
}
float z;
cout<<"Vvedite znachenie z(x=z esly z<1; x=z^1+1 esly z>=1"<<'\n';
cin>>z;
if ( z>1)
{
x=z;
}
else
{
x=(z*z)+1;
}
float n,m,k;
cout<<"y=sin(n*j(x)+cosk*x+lnm*x, Vvedite m,k,n "<<'\n';
cin>>m;
cin>>n;
cin>>k;
double y=sin(n*j)+cos(k*x)+log(m*x);
cout<<"y="<<y;




getch();
return 0;
}






































