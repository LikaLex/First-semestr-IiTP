#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
int a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
int y=a % b;
cout<<"Ostatok="<< y << '\n';
double c,d;
cout<<"Vvedite 2 lyubih chisla" << '\n';
cout<<"c="  ;
cin>>c;
cout<<"d=" ;
cin>>d;
double i=c/d;
cout<<"Chastnoe="<<i;
getch();
return 0;
}


