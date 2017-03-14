#pragma hdrstop
#include <iostream>
#include <conio.h>
using namespace std;

char maxf(int i)
{
char max = 48,k;
for (int t=0; t<i; t++)
{
if (t>9) k=t+55;
else k=t+48;
if (max<k) max=k;
}
return max;
}


char minf(int i)
{
char min = 50,k;
for (int t=0; t<i; t++)
{
if (t>9) k=t+55;
else k=t+48;
if (min>k) min=k;
}

return min;
}

int main()
{


char a[256];
cout << "a) max: ";
for (int t=0; t<7; t++)
{
a[t]=maxf(6);
cout << a[t];
}
cout <<endl << "a) min: ";
for (int i=0; i<7; i++)
{
a[i]=minf(6);
if (i==0) a[i]=a[i]+1;
cout << a[i];
}
cout <<endl<< "b) max: ";
for (int r=0; r<2; r++)
{
a[r]=maxf(16);
cout << a[r];
}
cout <<endl<< "b) min: ";
for (int v=0; v<2; v++)
{
a[v]=minf(16);
if (v==0) a[v]=a[v]+1;
cout << a[v];
}
cout <<endl<< "c) max: ";
for (int y=0; y<5; y++)
{
a[y]=maxf(2);
cout << a[y];
}
cout <<endl<< "c) min: ";
for (int b=0; b<5; b++)
{
a[b]=minf(2);
if (b==0) a[b]=a[b]+1;
cout << a[b];
}
getch();
return 0;

}
