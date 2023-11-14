#include <iostream>
using namespace std;
const double cost = 2.5;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Цена за 1 кг яблок 2.5 рубля"<<endl;
	cout << "Введите количество килограмм"<<endl;
	double weight;
	cin >> weight;
	if (weight < 0) {
		cout << "Количество килограмм не может быть отрицательным";
	}
	else {
		cout << "C Вас:"<< weight * cost;
	}
}