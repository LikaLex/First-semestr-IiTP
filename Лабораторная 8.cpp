#include <iostream>
#include <windows.h>// Подключение рускоязычной консоли
using namespace std;

void swapshaker(int *arr, int i)// Используется в следующей функции для сортировки
{
    int buff;
    buff = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = buff;
}


void ShakerSort(int *arr, int size)//Сортировка по количество выпущенной продукции. Используется в четвертой функции
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
void func1(building* obj,int n)// Просто создает структуру
{
    int i;
    for (i=0; i<n; i++)
    {
        cout << "Введите имя предмета ";
        cin >>  obj[i].name ;
        cout << "Введите номер цеха ";
        cin >>  obj[i].number ;
         cout << "Введите кол-во предметов ";
        cin >>  obj[i].amount ;
        cout << "Введите материал предмета ";
        cin >>  obj[i].material;
        cout << "Введите стоимость предмета ";
        cin >>  obj[i].price ;
        obj[i].element=obj[i].price/obj[i].amount ;
    }
}

void func2(building* obj,const int n)//Вывод созданной структуры
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

void func3(building* amount,int n)//Добавление структуры
{
    cout << "Введите данные структуры \n";
    cout << "Введите имя предмета ";
    cin >>  amount[n].name ;
    cout << "Введите номер цеха ";
    cin >>  amount[n].number ;
    cout << "Введите кол-во предметов ";
    cin >>  amount[n].amount ;
    cout << "Введите материал предмета ";
    cin >>  amount[n].material;
    cout << "Введите стоимость предмета ";
    cin >>  amount[n].price ;
     amount[n].element=amount[n].price/amount[n].amount ;

}

void func4(building* obj, int n,int ceh)//Сортировка по количество выпущенной продукции. Выводит имя и количество выпущенной продукции
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


void func5(building* obj, int n)// Сортировка методом вставки по номеру цеха(Просто пересортирует по возрастанию)
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
    cout << "Введите количество структур ";
    cin >> n;

    func1(amount,n);
    system("cls");
    cout << "Введите № функции, которой хотите воспользоваться\n ";
    cin >> T;
    while (T!=0)
    {
        yesno=1;
        switch (T)
        {
        case 2:
        {
            cout<<"Вы выбрали вывод структуры\n ";
            func2(amount,n);
            break;
        }
        case 3:
        {
            while(yesno!=0)
            {
                cout<<"Вы решили добавить новую структуру\n ";
                func3(amount,n);
                cout << "Продолжить ввод данных (1 - да, 0 - нет):\n ";
                n++;
                cin >> yesno;
            }
            break;
        }

        case 4:
        {
            cout<<"Вы выбрали сортировку по количеству выпущенной продукции. Выводит имя и количество выпущенной продукции \n";
            int ceh;
            cout << "Введите номер цеха ";
            cin >> ceh;
            func4(amount,n,ceh);
        }
        case 5:
        {   cout<<"Вы выбрали сортировку методом вставки по номеру цеха\n ";
            func5(amount,n);
        }
        }
        cout << "Введите № функции, которой хотите воспользоваться(0 - выйти из программы) \n";
        cin >> T;
        system("cls");//Чистит консольный экран
    }
    delete [] amount;
    return 0;
}



