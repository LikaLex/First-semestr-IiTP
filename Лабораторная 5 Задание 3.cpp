#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int n,i,j,sum=0,k=0;
    cout<<"������� ����������� �������: ";
    cin>>n;
    int **a = new int* [n];
        for (i=0;i<n;i++)
            a[i] = new int [n];
    cout<<"������� ������: ";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>a[i][j];
    int b[n];
    int c[n];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
        sum+=a[i][j];
        b[i]=sum;
        sum=0;
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++)
            sum+=a[i][j];
            c[j]=sum;
            sum=0;
        }
    cout<<endl;
    int r = c[0];
    for(i=0;i<n;i++)
        if((r==b[i])&&(r==c[i]))
            k++;
        if (k==n)
            cout<<"��� ���������� �������!";
        else cout<<"��� �� ���������� �������!";
        for (i=0;i<n;i++)
            delete [] a[i];
    return 0;
}
