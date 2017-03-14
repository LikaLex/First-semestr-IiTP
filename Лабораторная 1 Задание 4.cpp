#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

void main()
{
double x,p,n,KD;
cout<<"Enter  x=";
cin>>x;
cout<<"Enter  n=";
cin>>n;
cout<<"Enter  p=";
cin>>p;
cout<<"Enter  KD=";
cin>>KD;
double B=cos(x);
double C=p-n;
double Q=(pow(B,2)/KD)+(B*pow(C,3));
cout<<"Q=B^2/KD)+BC^3, and B=cos(x),C=p-n,";
cout<<"so Q="<<Q;
getch();
}
