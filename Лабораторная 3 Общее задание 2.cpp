#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
double x, S=0;
int i=1;

do

{
x =pow(0.5,i)+pow(1*1.0/3,i);
S+=x;
i++;
}
while(x>0.001);
cout<<"S="<<S;
getch();
return 0;
}
