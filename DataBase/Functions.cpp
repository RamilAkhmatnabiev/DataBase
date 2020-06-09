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

	cout << "������� ���������� ������" << endl;
	cin >> n;
	// working with buffer file. Recording the data

	ofstream record("Buffer.txt", ios::app);
	if (record)
	{
		record << n << endl;

		for (int i = 0; i < n; i++)
		{
			cout << "������� �������  :    ";
			cin >> _surname;

			cout << "������� �������  :    ";
			cin >> _phoneNum;

			cout << "������� �����  :    ";
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
		cout << "������ �������� �����" << endl;
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
				cout << " ������ �������" << endl;
			}
		}
		else
		{
			cout << "������  �������� ��������� �����" << endl;
		}

		

	}
	else
	{
		cout << "������ �������� �����" << endl;
	}

	reading.close();
	record.close();

}
