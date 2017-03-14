#pragma hdrstop
#include <iostream>
#include <conio.h>
using namespace std;
int M;
int st(int b)
{
int s=1;
for (int i=0; i<b; i++)
s=s*10;


return s;
}
int sr(int A)
{
int M=0,B,J,L=0;

B=A;
while (A>0)
{
A=A/10;
M++;
if (B==0) M=0;
}


for (int i=M;i>=1;i=i-1){
J=((B%st(i+1))/(st(i)));

if (J==1 || J==0) continue;
else {L=1;break;}


}


return L;
}


int func(int x)
{


int J,n=0,z,H=0,Z,Q,y=0;
int a[10000];

int X=x;
int Y=x;

if (X==0) H=1;
while ( X>0)
{
X/=10;
H++;
}

for (int i=0;; i++)
{
z=Y/2;
a[i]=Y%2;
Y=z;
n++;
if (Y==0) break;
}
for (int N=H-1,Q=H-1; N>=0; N--,Q--)
y+=a[N]*st(Q);
if (y==x)
{
J=1;

M=y;
}
else J=0;




return J;
}


int main()
{
int n,h=0;
cout<<"Enter n = ";
cin >> n;
while (n<1)
{
cout << "Input error. Try again ";
cin >> n;
}
for (int i=0;; i++)
{
if (sr(i)!=0) continue;
int y=func(i);
if (y==1) h+=1;
y=0;
if (h==n+1) break;
}

cout << endl << M ;
getch();
return 0;
}
