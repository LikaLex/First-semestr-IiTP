#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;


int main()
{
int i;
double y,x=0.0,B=M_PI/2,M=20, A=0, H;
H=1.0*(B-A)/M;
cout<<"\tx"<<" "<<"\ty"<<endl;
for(i=0; i<=20; i++)
{
x=A+i*H;
y=sin(x)-cos(x);
cout<<"\tx="<<x<<" "<<"\ty="<<y<<endl;
}
getch();
return 0;
}
