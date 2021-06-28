// №7.2
#include <iostream>
using namespace std;



//функция замены значений
void replace(double* min, double* middle, double* max) { 
    if (*max < *middle) //первое сравнение
        swap(*max, *middle);
    if (*max < *min)//второе сравнение
        swap(*max, *min);
    if (*middle < *min)//третье сравнение
        swap(*middle, *min);
}



int main() {
	setlocale(LC_ALL, "Russian");

    //ввод значений
    double min;
    cout << "Введите первое число: ";
    cin >> min;
    double middle;
    cout << "Введите первое число: ";
    cin >> middle;
    double max;
    cout << "Введите первое число: ";
    cin >> max;

    replace(&min, &middle, &max); //выполнение функции

    //вывод результата
    cout << "Числа после замены значений: " << min << " " << middle << " " << max << endl;


	return 0;
}