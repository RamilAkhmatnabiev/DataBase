#include "Functions.h"

void DataInitialization()
{
	ofstream _buf("Buffer.txt");
	if (!_buf)
	{
		cout << "error of create buffer file" << endl;
	}
	_buf.close();
}

void DataEntry()
{
	string _surname;
	int _phoneNum;
	string _city;
	int n;

	cout << "Введите количество данных" << endl;
	cin >> n;
	// working with buffer file. Recording the data

	ofstream record("Buffer.txt", ios::app);
	if (record)
	{
		record << n << endl;

		for (int i = 0; i < n; i++)
		{
			cout << "Введите фамилию  :    ";
			cin >> _surname;

			cout << "Введите телефон  :    ";
			cin >> _phoneNum;

			cout << "Введите город  :    ";
			cin >> _city;

			record << _surname << endl;
			record << _phoneNum << endl;
			if (i < n - 1)
			{
				record << _city << endl;
			}
			else
			{
				record << _city;
			}
			cout << "-------------------" << endl;
		}

	}
	else
	{
		cout << "ошибка открытия файла" << endl;
	}
	record.close();
}

void DataReading(string fileName)
{
	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);
	if (reading)
	{
		if (record)
		{
			string _surname;
			int _phoneNum;
			string _city;
			int n;

			reading >> n;
			record << n << endl;
			for (int i = 0; i < n; i++)
			{

				reading >> _surname;
				reading >> _phoneNum;
				reading >> _city;

				record << _surname << endl;
				record << _phoneNum << endl;
				if (i < n - 1)
				{
					record << _city << endl;
				}
				else
				{
					record << _city;
				}
				cout << " Данные считаны" << endl;
			}
		}
		else
		{
			cout << "Ошибка  открытия буферного файла" << endl;
		}

		

	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
	}

	reading.close();
	record.close();

}
