#pragma hdrstop
#include <iostream>
#include <conio.h>
using namespace std;
int st(int b)
{
int s=1;
for (int i=0; i<b; i++)
s=s*3;


return s;
}
int main ()
{
int n2,n1,N1,N2,i,a[5],b[5],t,S=0;
for (i=0; i<=4; i++)
a[i]=-3;


cout << "Kolichestvo umershih na pervom shage ";
cin >> N1;
while (N1<0)
{
cout << " Error. Try again ";
cin >> N1;
}
if (N1>0)
{
cout << "Vvedite nomera umershih ";
for (i=0; i<N1; i++)
{
cin >> n1;
a[n1-1]=0;

}
}
cout << "Kolichestvo umershih na vtorom shage ";
cin >> N2;
while (N2<0 || N2>5-N1)
{
cout <<  " Error. Try again " ;
cin >> N2;

}

if (N2>0)
{
for (i=0; i<N2; i++)
{
cin >> n2;
a[n2-1]=1;

}
}
for (i=0; i<=4; i++)
{
if (a[i]==-3) a[i]=2;
}
for (i=0,t=4; i<=4; t--, i++)
b[t]=a[i];

for (i=0,t=4; i<=4; t--, i++)
S+=b[i]*st(t);
cout << "Nomer bochki " <<S;
getch();
return 0;
}
