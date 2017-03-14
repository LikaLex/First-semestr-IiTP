#include <iostream>

using namespace std;

void func1(int **a, int size)
{
    int sum=0, i, t;
    for (i=0; i<size; i++)
    {
        for (t=0; t<size; t++)
        {
            if (i%2==0) sum+= *(*(a+i)+t);

        }
    }
    cout << "\n\nсумма элементов четных строк матрицы А " << sum << "\t";
}

void func2(int **b, int size)
{
    int sum=0, i, t;
    for (i=0; i<size; i++)
    {
        for (t=0; t<size; t++)
        {
            if (i%2!=0) sum+= *(*(b+i)+t);

        }
    }
   cout << "сумма элементов нечетных строк матрицы B " << sum << "\t";
}

int main()
{
    setlocale (LC_ALL, "Russian");
    int **a,**b,n,i,t,c,s1a=0,S1a=0,s1b=0,S1b=0;
    int size;

    cout << "Введите размер:";
    cin >> size;

    a=new int*[size];
    b=new int*[size];
    for (i=0; i<size; i++)
    {
        a[i]=new int[size];
        b[i]=new int[size];
    }
    for (i=0; i<size; i++)
    {


        for (t=0; t<size; t++)
        {
            if (i<=5) c=2*i*t*t-2*t;
            else c=3*i*t-3;
            *(*(a+i)+t)=c;
            cout << *(*(a+i)+t) << "\t";

            if (t%2!=0) S1a+=*(*(a+i)+t);
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    for (i=0; i<size; i++)
    {
        for (t=0; t<size; t++)
        {
            *(*(b+i)+t)=*(*(a+t)+i);// i и t меняются местами и столбцы становятся строками

            if (t%2==0) S1b+=*(*(b+i)+t);
            cout << *(*(b+i)+t) << "\t";
        }
        cout << endl;
    }
    func1(a, size);
    cout <<  "сумма элементов нечетных столбцов матрицы А "<< S1a << endl;
    cout  << "сумма элементов четных столбцов матрицы B "<< S1b << endl;
func2(b, size);
    return 0;
}
