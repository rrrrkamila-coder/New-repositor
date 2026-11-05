// 2.1-2.2. Отладка: точки останова, локальные переменные, обработка исключений
#include <iostream>
#include <stdexcept>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    char op;

    cout << "Введите выражение (a op b): ";
    cin >> a >> op >> b;

    try
    {
        double result = 0;
        switch (op)
        {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0)
            {
                throw runtime_error("Деление на ноль");
            }
            result = a / b;
            break;
        default:
            throw invalid_argument("Неизвестная операция");
        }
        cout << "Результат: " << result << endl;
    }
    catch (const exception& ex)
    {
        cout << "Ошибка: " << ex.what() << endl;
    }
    return 0;
}
