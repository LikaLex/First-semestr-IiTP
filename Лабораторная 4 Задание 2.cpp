#pragma hdrstop
#include <iostream>
#include <conio.h>
using namespace std;

// N / 7
// N = 2a + b, b = {0, 1};
// У нас есть число N, которое делится или не делится на 7;
// N = 2a + b -> K = a + 4b; N

// 27(10) = (16 + 8 + 2 + 1)(10) = (11011)(2); (рандомное число)

// 7( 10) = (4  + 2  +1)(10) = (111)(2);
// 73(10) = ( 64 + 8 + 1) (10) = (1001001) (2);
// 109(10) = (64 + 32 + 8 + 4 + 1) = (1101101) (2);

// Пусть
// N = 0000000000011011;
// N >> 1 = 0000000000001101;
// N << 1 = 0000000000110110;



// 2a + b : 7; | *4
// 8a + 4b : 7;
// a + 4b : 7;
// 4 - 2 в квадрате
void check7(long long N) {
	while (N > 7) {
		int a;
		int b;

		a = N >> 1;
		b = N - (a << 1);
		N = a + (b << 2); //a + 2*2
		if (N == 7) cout << " Podelilos vse na sem! Ti uhodish nasovsem!";
		if (N < 7) cout << " \n Zachem tebe eta semerka? Est mnogo drugix voshititelnih chisel! ";
	}
}

//2a + b : 73 | * 37
//74a + 37b : 73;
//a + 37 b : 73;
//37 = 32 + 4 + 1

void check73(long long N){
	while (N>73){
	int a;
	int b;
	a = N >> 1;
	b = N - (a << 1);
	N = a + b + (b<<2) + (b<<5);// a + 1 + 2*2 + 2*2*2*2*2
	//cout<<a<<" "<<b<<" "<<N << endl;
	if (N == 73 /*|| N == 146 || N == 219 || N == 292 || N == 365*/) {
	cout << " Eto chislo...A slabo v ume poschitat? Nu ladno.. Delitsa na 73 ";
	break;
	}
	if (N<73) cout<< " Ups.. Ne delitsa na 73.. Da ladno, ne perezhivai.. Poprobui zagadat drugoe chislo.. ";
   }
}


//2a + b : 109 |* 55;
//110a + 55b : 109;
//a+ 55b : 109;
//55 = 32 + 16 + 4 + 2 + 1
void check109(long long N){
	while (N>109){
	int a;
	int b;
	a = N >> 1;
	b = N - (a << 1);
	N = a + b +  (b<<1) +  (b<<2) + ( b<<4) + (b<<5);// a + 1 + 2 + 2*2 + 2*2*2*2 + 2*2*2*2*2
	//cout<<a<<" "<<b<<" "<<N << endl;
	if (N == 109 /*|| N == 218 || N == 327 || N == 436 || N == 545*/) {
	cout << " Tadams! Pozdravlyayu! Eto chislo delitsa na 109! Imenno stolko chasov svoei zizni ia ubila na etu programu!";
	break;
	}
	if (N<109) cout<< " Ia voobshe ni na chto ne delus! Zadnaia ia! Zadnaia! Tem bolee na 109!";
   }
}


	int main() {
	long long number1;
	cout<<" Gospoda znatoki!\n" <<" Vskolihnite seroe veshestvo v vashih korobochkah!\n" << " Zagadaite lyuboye chislo i ia tochno skazy delitsa li ono na 7, 73 i 109!\n" <<" Da vi ne boites, cifri - eto ne bolno...";
	cout<<endl<<endl;
	cout<<" Itak.. Vashe chislo..";
	cin >> number1;
	if (number1 <0) cout <<"\n Izdevaeshsa, da? Migom vvedi polozhitelnoe chislo!\n";

	else if (number1<7)cout <<" Malovato budet. Tochno pravilno vvel?";

	else if (number1 == 7)cout << " \n Da nu..Vsego-to. Da, ono delitsa na sem. No eyo sliskom skychno. Ia tak ne igraiu..\n";

	else if (number1 == 73)cout << " \n I vse? Na bolshee fantazii ne hvatilo? Nu, delitsa ono na 73. Legche stalo?\n";

	else if (number1 == 109)cout << " \n Da ladno.. Ny eto zhe skychno.. I tak vsem poniatno, chto chislo 109 delitsa na sebia.. Ia ozidala bolshego..\n";

	else if (number1 <0) cout <<"\n Izdevaeshsa, da? Migom vvedi polozhitelnoe chislo!\n";



	else
	cout<<endl<<endl;
	check7(number1); // Вызов функции, которая проверяет делимость на 7
	cout<<endl<<endl;
	check73(number1); // Вызов функции, которая проверяет делимость на 73
	cout<<endl<<endl;
	check109(number1); // Вызов функции, которая проверяет делимость на 109
	cout<<endl<<endl;
	cout<<" Bog sozdal mir ne s pervoi popytki... A ty risknew ewe raz?";
	getch();
	return 0;
}

