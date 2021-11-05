#include <iostream>
#include <list>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main()
{

    setlocale(LC_ALL, "rus");

    //........................................
    cout << " Найти сумму цифр в числе" << endl;
    cout << "Введите число - ";


    int n, sum = 0;
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "sum = " << sum << endl;
    //........................................

    //........................................
    cout << " 1 задача" << endl;
    int main();
    {
        int sum = 0;
        for (int i = 0; i <= 99; i++) {

            sum += i;
        }

        cout << sum << endl;
    }
    //........................................
    //cout << "Вывести на экран цифровой треугольник " << endl;
    //int main();
    //{
        //int k = 7;
        //for (int i = 1; i <= 5; i++)
        //{
            //for (int b = 1; b <= i; b++)
                //cout << k << "  ";

            //cout << endl;
        //}

    //}
    //........................................
    //cout << " Вычислить произведение элементов следующей последовательности " << endl;
    //int main();
    //{
        //int sum = 0;
        //for (i = 0; i <= sqrt(95); i++)
        //{
            //sum += i;
        //}
        //cout << sum << endl;
    //}


}




