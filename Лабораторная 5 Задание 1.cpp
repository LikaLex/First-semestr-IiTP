#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int i,i1=0,i2=0,n,pol=0,otric=0;
    cout<<"Введите количество элементов массива: ";
    cin>>n;
    int a[n];
    cout<<"Введите массив: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)//Подсчет положительных и отрицательных элементов
    {
        if (a[i]>0)
            pol++;
        else otric++;
    }
    int b[pol];
    int c[otric];
    for (i=0;i<n;i++)//Сортировка на положительные и отрицательные элементы
    {
        if(a[i]>0)
        {
            b[i1]=a[i];
            i1++;
        }
        else {
            c[i2]=a[i];
            i2++;
        }
    }
    cout<<endl<<"Массив с положительными элементами: ";
    for(i=0;i<pol;i++)
        cout<<b[i]<<" ";
     cout<<endl<<"Массив с отрицательными элементами: ";
    for(i=0;i<otric;i++)
        cout<<c[i]<<" ";
    return 0;
}
