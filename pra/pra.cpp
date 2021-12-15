
#include <iostream>
#include <iomanip>
using namespace std;

int const n = 2, m = 4;
int mass[n][m], sum, kol;
double sred, sred1, sumElem, sumElem1;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Введите массив: " << endl;
    for (int i = 0; i < n; i++) //заполнение массива
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mass[i][j];
        }
        cout << endl;
    }


    cout <<  "Сам массив: " << endl; //вывод введенного массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(3) << mass[i][j] ;
            
            //расчет суммы элементов строк
            if (i == 0)
            {
                sumElem += mass[i][j];
            }
            else
            {
                sumElem1 += mass[i][j];
            }
            //конец 
        }
        cout << endl;
    } 

    //вычисление среднего элементов строк
    cout << endl;
    sred = sumElem / m;
    cout << "Среднее первой строки: " << sred << endl;

    sred1 = sumElem1 / m;
    cout << "Среднее второй строки: " << sred1 << endl;
    

    for (int i = 0; i < n; i++) //начало подсчетов задачи
    {
        for (int j = 0; j < m; j++)
        {
                if (i == 0)
                {
                    if (mass[i][j] > sred)
                    {
                        sum += mass[i][j];
                        kol++;
                    }
                }
                else
                {
                    if (mass[i][j] > sred1)
                    {
                        sum += mass[i][j];
                        kol++;
                    }
                }
        }
        cout << endl;
    }

    //вывод итогов
    cout << "Сумма элементов каждой строки, больших среднего арифметического элементов данной строки:  " << sum << endl ;
    cout << "Кол-во этих элементов: " << kol << endl;

    return 0;
}




