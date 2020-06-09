#include "Functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>



int _stateMenu;
void Menu()
{
    cout << "Веберите действе:" << endl
        << "(0) Выход из программы" << endl
        << "(1) Ввод данных" << endl
        << "(2) Вывод данных" << endl
        << "(3) Изменение данных" << endl
        << "(4) Удаление данных" << endl
        << "(5) Добавление данных" << endl
        << "(6) Сохранение данных" << endl
        << "Ваш выбор" << endl;
    cin >> _stateMenu;
}
int main()
{
    setlocale(LC_ALL, "ru");
    DataInitialization();
    Menu();
    int _action;
    string fileName;

    while (_stateMenu !=0)
    {
        switch (_stateMenu)
        {
        case 1:
            system("cls");

            cout << "Ввод вручную из файла?" << endl;
            cin >> _action;

            system("cls");

            if (_action == 1)
            {
                DataEntry();
            }
            else
            {
                cout << "Введите название файла" << endl;
                cin >> fileName;
                DataReading(fileName);
            }
            system("pause");
            system("cls");
            Menu();
            break;
        case 2:
            system("cls");

            Print();

            system("pause");
            system("cls");
            Menu();
            break;
        case 3:
            system("cls");

            DataChange();

            system("pause");
            system("cls");
            Menu();
            break;

        case 4:
            system("cls");

            DeleteData();

            system("pause");
            system("cls");
            Menu();
            break;

        case 5:
            system("cls");

            AddData();

            system("pause");
            system("cls");
            Menu();
            break;

        case 6:
            system("cls");

            cout << "Введите название файла" << endl;

            cin >> fileName;

            system("cls");

            SaveData(fileName);

            system("pause");
            system("cls");
            Menu();
            break;

        default:
            break;
        }
    }

    system("cls");
    if (DataCleaning())
    {
        cout << "Data is cleaning" << endl;
    }
    else
    {
        cout << "Error of data cleaning" << endl;
    }
    cout<<"Programm is over"<<endl;
    system("pause");
}

