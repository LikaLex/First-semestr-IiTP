#include <iostream>
#include <windows.h>// ����������� ������������ �������
using namespace std;

void swapshaker(int *arr, int i)// ������������ � ��������� ������� ��� ����������
{
    int buff;
    buff = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = buff;
}


void ShakerSort(int *arr, int size)//���������� �� ���������� ���������� ���������. ������������ � ��������� �������
{
    int leftMark = 1;
    int rightMark = size - 1;
    while (leftMark <= rightMark)
    {
        for (int i = rightMark; i >= leftMark; i--)
            if (arr[i - 1] > arr[i]) swapshaker(arr, i);
        leftMark++;


        for (int i = leftMark; i <= rightMark; i++)
            if (arr[i - 1] > arr[i]) swapshaker(arr, i);
        rightMark--;
    }
}

struct building
{
    string name;
    int number;
    float amount;
    string material;
    float price;
    float element;

};
void func1(building* obj,int n)// ������ ������� ���������
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "������� ��� �������� ";
        cin >>  obj[i].name ;
        cout << "������� ����� ���� ";
        cin >>  obj[i].number ;
         cout << "������� ���-�� ��������� ";
        cin >>  obj[i].amount ;
        cout << "������� �������� �������� ";
        cin >>  obj[i].material;
        cout << "������� ��������� �������� ";
        cin >>  obj[i].price ;
        obj[i].element=obj[i].price/obj[i].amount ;
    }
}

void func2(building* obj,const int n)//����� ��������� ���������
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "name " << obj[i].name << endl;
        cout << "number " << obj[i].number << endl;
        cout << "amount " << obj[i].amount << endl;
        cout << "material " << obj[i].material << endl;
        cout << "price " << obj[i].price << endl;
         cout << "element " << obj[i].element<<endl;
        cout << endl << endl;
    }
}

void func3(building* amount,int n)//���������� ���������
{
    cout << "������� ������ ��������� \n";
    cout << "������� ��� �������� ";
    cin >>  amount[n].name ;
    cout << "������� ����� ���� ";
    cin >>  amount[n].number ;
    cout << "������� ���-�� ��������� ";
    cin >>  amount[n].amount ;
    cout << "������� �������� �������� ";
    cin >>  amount[n].material;
    cout << "������� ��������� �������� ";
    cin >>  amount[n].price ;
     amount[n].element=amount[n].price/amount[n].amount ;

}

void func4(building* obj, int n,int ceh)//���������� �� ���������� ���������� ���������. ������� ��� � ���������� ���������� ���������
{
    int sort[n],k=0,i;
    for (i=0; i<n; i++)

        if(obj[i].number==ceh)
        {
            sort[k]=obj[i].amount;
            k++;
        }
    ShakerSort(sort,k);
    int stop;
    cout << "name" << "\t"<<"amount"<<endl;
    for (i=k-1; i>=0; i--)
    {

        for (int j=0; j<n; j++)
        {
            if (sort[i]==obj[j].amount)
            {
                cout  << obj[j].name << "\t";

                cout  << obj[j].amount<<endl ;

                stop=1;
            }
            if(stop==1) break;
        }

        stop=0;
    }
}


void func5(building* obj, int n)// ���������� ������� ������� �� ������ ����(������ ������������� �� �����������)
{
    int i,k=0,N=0,choice;
    building* min=new building [1];
    while (k<n-1)
    {
        choice=0;
        min->name=obj[k].name ;
        min->number=obj[k].number;
        min->amount =obj[k].amount;
        min->material=obj[k].material;
        min->price=obj[k].price;
          min->element=obj[k].element;
        for (i=k+1; i<n; i++)
        {
            if (min->number>obj[i].number)
            {
                min->name=obj[i].name ;
                min->number=obj[i].number;
                min->amount =obj[i].amount;
                min->material=obj[i].material;
                min->price=obj[i].price;
                min->element=obj[k].element;
                N=i;
                choice=1;
            }
        }
        if(choice==1)
        {
            obj[N].name=obj[k].name ;
            obj[N].number=obj[k].number;
            obj[N].amount=obj[k].amount;
            obj[N].material=obj[k].material;
            obj[N].price=obj[k].price;
            obj[N].element=obj[k].element;

            obj[k].name=min->name ;
            obj[k].number=min->number;
            obj[k].amount=min->amount;
            obj[k].material=min->material;
            obj[k].price=min->price;
             obj[N].element=min->element;
        }
        k++;
    }
}


using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    building* amount=new building[100];
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n,N=0,T,yesno;
    cout << "������� ���������� �������� ";
    cin >> n;

    func1(amount,n);
    system("cls");
    cout << "������� � �������, ������� ������ ���������������\n ";
    cin >> T;
    while (T!=0)
    {
        yesno=1;
        switch (T)
        {
        case 2:
        {
            cout<<"�� ������� ����� ���������\n ";
            func2(amount,n);
            break;
        }
        case 3:
        {
            while(yesno!=0)
            {
                cout<<"�� ������ �������� ����� ���������\n ";
                func3(amount,n);
                cout << "���������� ���� ������ (1 - ��, 0 - ���):\n ";
                n++;
                cin >> yesno;
            }
            break;
        }

        case 4:
        {
            cout<<"�� ������� ���������� �� ���������� ���������� ���������. ������� ��� � ���������� ���������� ��������� \n";
            int ceh;
            cout << "������� ����� ���� ";
            cin >> ceh;
            func4(amount,n,ceh);
        }
        case 5:
        {   cout<<"�� ������� ���������� ������� ������� �� ������ ����\n ";
            func5(amount,n);
        }
        }
        cout << "������� � �������, ������� ������ ���������������(0 - ����� �� ���������) \n";
        cin >> T;
        system("cls");//������ ���������� �����
    }
    delete [] amount;
    return 0;
}



