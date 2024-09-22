#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, xp, Xk, dX; // аргументи
    double a, b, c; // параметри
    double F; // результат обчислення функції


    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "Xp = "; cin >> xp;
    cout << "XK = "; cin >> Xk;
    cout << "dX = "; cin >> dX;


  


    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "F(x)" << " |" << endl;
    cout << "-----------------------------------------" << endl;


    x = xp;
    while (x <= Xk) {
        if ((x + c < 0) && (a != 0))
            F = -a * x * x - b;
        else if ((x + c > 0) && (a == 0))
            F = (x - a) / (x - c);
        else
            F = (x + c) + (c / x);

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(5) << F << " |" << endl;

        // Крок
        x += dX;
    }

    cout << "-----------------------------------------" << endl;

    return 0;
}
