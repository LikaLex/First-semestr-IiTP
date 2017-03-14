#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
    int i,n;
    char a[80];
    gets(a);// ¬вод строки с пробелами
    n=strlen(a);//¬ычисл€ет текущую длину строки а

    int j=0,k=0,K;
    int min;
    while (j<n-1)
    {
        min =int(a[j]);
        for (i=j; i<n; i+=2)// 2, потому что с пробелами
        {
            if (int(a[i])<min)
            {
                min=int(a[i]);
                k++;//делаем к!=0, если нужен своп
                K=i;//аписыаем номер минимального элемента дл€ свопа
            }

        }
        if (k>0) swap(a[j],a[K]);//swap сортирует числа по возрастанию
        k=0;// обнул€ем, чтобы своп не выполн€лс€, если условие цикла не выполн€етс€
        j+=2;
    }
    cout << a;

    return 0;
}





