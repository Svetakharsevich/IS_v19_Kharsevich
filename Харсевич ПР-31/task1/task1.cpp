
#include <iostream>
using namespace std;

//task1
bool PrimeNumbers(int n) {
    if (n == 0 || n == 1|| n < 0) {
        return false;
    }
    else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
//task2
int Factorial(int n) {

    int factorialnumber=1;
    if (n < 0 || n == 0) cout<<"Вы вели неверное число"<<endl;
    else {
        for (int i = 1; i <= n; i++) {
            factorialnumber *= i;
        }
        return factorialnumber;
    }
    return 0;             
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int menu = 0;
    do {
        cout << "Введите 1-чтобы показать первое задание;2-показать второе задание;0-выход" << endl;
        cin >> menu;
        if (menu == 1) {
            int startnumber, finishnumber, count = 0;
            cout << "Введите число начало диапозона" << endl;
            cin >> startnumber;
            cout << "Введите число конца диапозона" << endl;
            cin >> finishnumber;
            for (int i = startnumber; i < finishnumber; i++) {
                if (PrimeNumbers(i)) {
                    cout << "Простое число в заданном диапозоне "<< i << endl;
                    count++;
                }
            }
            cout << "Число простых числел в диапозоне " << count << endl;

        }
        else if (menu == 2) {
            //task2
            int factorialnumber;
            cout << "Введите число для вычисления факториала" << endl;
            cin >> factorialnumber;

            cout << "Факториал заданного числа " << Factorial(factorialnumber) << endl;
        }
    } while (menu != 0);

}
