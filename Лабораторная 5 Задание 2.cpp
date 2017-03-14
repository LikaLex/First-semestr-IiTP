#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int N,M,i,j,x=0,maks=0;//x=0, если учитывать элементы диагонали, х=1, если не учитывать элементы диагонали
    cout<<"Введите размерность матрицы (N*M): ";
    cin>>N>>M;
    if(N!=M)
        cout<<"Матрица не квадратная!";
    else{
    int a[N][M];
    for (i=0;i<N;i++)
        for (j=0;j<M;j++)
        cin>>a[i][j];
        cout<<endl<<"Исходная матрица: \n";
     for (i=0;i<N;i++){
            cout<<endl;
        for (j=0;j<M;j++)
        cout<<a[i][j]<<" \t";}
     for (i=0;i<N;i++){
     for (j=0;j<M-x;j++){
        if(a[i][j]>maks)
        maks=a[i][j];
     }
     x++;}
     cout<<endl<<"Максимальный элемент выше побочной диагонали: "<<maks;}
    return 0;
}
