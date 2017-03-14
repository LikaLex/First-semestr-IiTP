#pragma hdrstop
#include <tchar.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	long int a,b;
	float sum=0, x;
	long long int fact=1;
	double e= 2.71828;
	cout << "Please, enter the number of members: ";
	cin >> a;
	cout << "Please, enter the number of arguments: ";
	cin >> b;


	for (int i = 1 ; i <=b; i++)
	{
		cout << "Please, enter the argument of function: ";
		cin >> x;
		if (x<0.1||x>1) cout<< "Vi vveli nevernoe znachenie\n" ;
   else {

		for (int j = 1; j <= a; j++) {
		fact=fact*j   ;
			sum = sum + (((powf(j,2)+1)/fact)*(powf(x/2,j))) ; }



		cout << "The standard value is: " << (((x*x)/4 + x/2 +1)*(powf(e,(x/2)))) << "\nOur value is: " << sum << endl;


		sum = 0; }
	}

	getch();
	return 0;
}

