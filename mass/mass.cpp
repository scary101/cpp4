// mass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	const int stroka = 5;
	const int stolb = 3;
	double arr[stolb][stroka];
	for (int i = 0; i < stolb; i++) {
		cout << "Stroka " << i + 1 << ": ";
		for (int j = 0; j < stroka; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < stolb; i++) {
		float sum = 0;
		for (int j = 0; j < stroka; j++) {
			sum += arr[i][j];
		}
		float avg = sum / stroka;
		cout << "Среднее арифметическое элементов строки " << i + 1 << " = " << avg << endl;
	}

}