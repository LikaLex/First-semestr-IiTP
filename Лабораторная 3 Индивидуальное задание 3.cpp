#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()

{
	float c, f = 0;
	 cout<<"\n c"<<"\t f(x)";
	for(c = 2; c < 3.2; c += 0.2)
	{
		f = (exp(powf(c,2))/2);
		cout << "\n" << c << "\t" << f;
	}
	getch();
}
