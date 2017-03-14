#include <iostream>
#include <cmath>

using namespace std;

double func1(double sum,int N,int n,double *a)
 {
    sum*=sin(a[n])-cos(a[n]);
    if (N==n) return sum;
    else return func1(sum,N,n+1,a);

 }
int main()
{
    int i,n;
    double sum;
    cin >> n;
    while (n%3!=0 || n==0){
        cout << "Input error. Try again ";
        cin >> n;
    }
    double a[n];
    for (i=1; i<=n; i++)
        cin >> a[i];
        sum=func1(1.0,n/3,1,a);
sum=sum*func1(1.0,n-1,n/3+1,a)*(sin(a[n])-cos(a[n]));
cout << sum;
    return 0;
}
