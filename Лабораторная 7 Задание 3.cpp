#include <iostream>
#include <windows.h>

using namespace std;
int func(char *a,int n);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale (LC_ALL,"Russian");
      int i,j,n=0,N,t=0;
     char a[80], **str;// объявление динамического массива строк
     cout << " введите кол-во строк ";
     cin >> N;
     int c[N],l[N];
     str =new char* [N];//выделение памяти под сам двумерный массив
     for (i=0;i<N;i++)
     {
     cin >> a;
    for (int j=0;a[j];j++)
         n++;//кол-во символов в моей строке
     str[t] = new char [n];//Выделение памяти под строки
     for (int I=0;I<n;I++) str[t][I]=a[I];//передаю строку строке динамической матрицы
     t++;
     c[i]=n;
    l[i]=func(a,n);// Возвращает 1, если симметрична, 0, если несимметрична
     n=0;
     }
cout << endl << endl;
   for (i=0;i<N;i++)
    {int k = c[i];// Переменной к присваивается количество столбцов(букв либо цифр)
       for (j=0;j<k;j++) cout << str[i][j] ;

if (l[i]==1) cout << "  строка симметрична ";
     else cout << "  строка несимметрична ";
     cout << endl;
    }


    return 0;
}


int func(char *a,int n)
{
    int i,Z=0;

    char c[n],b[n];
    for (i=0; i<n; i++)
    {

        c[i]=a[i];

    }

    for (i=n-1; i>=0; i--)
    {

        b[n-1-i]=a[i];// Превый элемент строки a становится последним элементом строки b

    }



    for (i=0; i<n; i++)
if (b[i]==c[i]) Z++;

   if (Z==n) return 1;
    else return 0;



}








