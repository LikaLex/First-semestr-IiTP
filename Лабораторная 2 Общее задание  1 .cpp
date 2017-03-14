#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
int x,y;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
 if (x>y)
 y=0;
 else if (x<y)
 x=0;
 else
 x=y=0;

 cout<<"x="<<x ;
 cout<<"y="<<y;

getch();
return 0;
}


