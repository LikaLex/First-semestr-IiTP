
#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip.h>
#include <Windows.h>
using namespace std;


#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
float x, y, b=2, shug, min_y=100, koren, modul;
int n;
const float c = 0.5;
cout <<"Enter the amount of parts: n=";
cin >> n;
if (n<=0) {
cout << "Neverno"<< endl;

}

shug=b/n;

for (x = 0; x <= 2; x=x+shug)
{
y=log10(cosh(x))-tanh(x)+c;
modul=fabs(y);
if (modul<min_y) {
min_y=modul;
koren = x;
}
}

cout << "x="<<koren<<endl;
getch();
return 0;
}
