// 7. Тестирование: структура с операциями возведения в степень и извлечения корня
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <clocale>
using namespace std;

struct PowerRootOperations
{
    static double square(double x)
    {
        return x * x;
    }

    static double cube(double x)
    {
        return x * x * x;
    }

    static double power(double base, double exponent)
    {
        if (base == 0 && exponent < 0)
        {
            throw invalid_argument("Ноль нельзя возводить в отрицательную степень");
        }
        double result = pow(base, exponent);
        if (isnan(result))
        {
            throw invalid_argument("Результат не является числом");
        }
        return result;
    }

    static double nthRoot(double x, int n)
    {
        if (n <= 0)
        {
            throw invalid_argument("Степень корня должна быть положительной");
        }
        if (x < 0)
        {
            if (n % 2 == 0)
            {
                throw invalid_argument("Корень чётной степени из отрицательного числа не существует");
            }
            return -pow(-x, 1.0 / n);
        }
        return pow(x, 1.0 / n);
    }
};

#ifndef UNIT_TESTING
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << PowerRootOperations::square(5) << endl;
    cout << PowerRootOperations::cube(3) << endl;
    cout << PowerRootOperations::power(2, 10) << endl;
    cout << PowerRootOperations::nthRoot(27, 3) << endl;
    cout << PowerRootOperations::nthRoot(-8, 3) << endl;
    try
    {
        cout << PowerRootOperations::nthRoot(-16, 2) << endl;
    }
    catch (const invalid_argument& ex)
    {
        cout << "Ошибка: " << ex.what() << endl;
    }
    return 0;
}
#endif
