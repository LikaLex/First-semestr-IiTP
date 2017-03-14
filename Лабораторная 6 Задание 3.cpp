#include <iostream>
#include <cmath>
using namespace std;
double func2(int n)
{
    int t,i;
    double x,h,sum=0;
    double a=0.4,b=1.2;
    h=(b-a)/n;
    for (x=a,i=0; i<=n-1; x=a+i*h+h/2,i++)
        sum+=sin(1.5*x+0.3)/(2.3+cos(0.4*x*x+1));

    return h*sum;
}
double func1(int n)
{
    int t,i;
    double x,h,sum=0;
    double a=1.2,b=2;

    h=(b-a)/n;
    for (x=a,i=0; i<=n-1; x=a+i*h,i++)
        sum+=sqrt(0.6*x+1.7)/(2.1*x+sqrt(0.7*x*x+1));

    return h*sum;
}
double func3(int n)
{
    int t,i;
    double x,h,sum=0;
    double a=0.4,b=1.2;

    h=(b-a)/n;
    for (i=1,x=a; i<n; x=a+i*h,i++)
        sum+=1/sqrt(3+x*x);


    return h*(sum+(1/sqrt(3+a*a)+1/sqrt(3+(a+h*n)*(a+h*n)))/2);
}


double func4(int n)
{
    int t,i;
    double x,h,sum=0;
    double a=0.4,b=1.2;

    h=(b-a)/n;
    for (x=a,i=1; i<=n; x=a+i*h,i++)
        sum+=(2*x+0.5)*sin(x);

    return h*sum;
}

int main()
{
    setlocale(LC_ALL,"Russian");
    int n;
    cin >> n;
    cout << "первая функция методом левых прямоугольников " << func1(n);
    cout << "\n\nвтора я функция методом центральных прямоугольников " << func2(n);
    cout << "\n\nтретья функция методом центральных трапеций " << func3(n);
    cout << "\n\nчетвертая функция методом правых прямоугольников " << func4(n) << endl << endl;
    return 0;
}
