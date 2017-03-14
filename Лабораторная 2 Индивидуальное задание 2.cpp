#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
cout<<"Vvedite x,y"<<'\n' ;
float x,y;
cin>>x>>y;
if ((x/y)>0)
{
float m=x+log(pow(fabs(y),3));
cout<<"x/y>0,s=x+ln(|y|))^3="<<m<<'\n';
}
else if ((x/y)<0)
{
float n=(2/3)+log(fabs(sin(y)));
cout<<"x/y<0, s=ln(|sin(y)|)="<<n<<'\n';
}
else
{
float t=pow(x,(2/3))+y;
cout<<"x/y=0, s=x^(2/3)+y="<<t;
}
getch();
return 0;
}


