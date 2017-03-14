#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
int x,y,z;
cout<<"x=";
cin>>x;
cout<<"y=";
cin>>y;
cout<<"z=";
cin>>z;
if ((x+y)>z)
cout<<"Treugolnik sushestvuet\n";
else
cout<<"Treugolnik ne sushestvuet\n" ;
getch();
return 0;
}
