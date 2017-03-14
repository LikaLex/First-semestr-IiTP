#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
double a=0,b=0,N=0;
int  i=1;
while (i<=30)
{
if (i%2==0)
{a=i/2;
b=i*i*i;
}
else
{
a=i;
 b=i*i;
}
N=N+powf((a-b),2);
 i=i+1;
}
cout<<"N="<<N;

getch();
return 0;
}


