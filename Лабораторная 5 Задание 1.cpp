#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int i,i1=0,i2=0,n,pol=0,otric=0;
    cout<<"������� ���������� ��������� �������: ";
    cin>>n;
    int a[n];
    cout<<"������� ������: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)//������� ������������� � ������������� ���������
    {
        if (a[i]>0)
            pol++;
        else otric++;
    }
    int b[pol];
    int c[otric];
    for (i=0;i<n;i++)//���������� �� ������������� � ������������� ��������
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
    cout<<endl<<"������ � �������������� ����������: ";
    for(i=0;i<pol;i++)
        cout<<b[i]<<" ";
     cout<<endl<<"������ � �������������� ����������: ";
    for(i=0;i<otric;i++)
        cout<<c[i]<<" ";
    return 0;
}
