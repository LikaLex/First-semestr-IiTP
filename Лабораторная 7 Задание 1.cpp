#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
    int i,n;
    char a[80];
    gets(a);// ���� ������ � ���������
    n=strlen(a);//��������� ������� ����� ������ �

    int j=0,k=0,K;
    int min;
    while (j<n-1)
    {
        min =int(a[j]);
        for (i=j; i<n; i+=2)// 2, ������ ��� � ���������
        {
            if (int(a[i])<min)
            {
                min=int(a[i]);
                k++;//������ �!=0, ���� ����� ����
                K=i;//�������� ����� ������������ �������� ��� �����
            }

        }
        if (k>0) swap(a[j],a[K]);//swap ��������� ����� �� �����������
        k=0;// ��������, ����� ���� �� ����������, ���� ������� ����� �� �����������
        j+=2;
    }
    cout << a;

    return 0;
}





