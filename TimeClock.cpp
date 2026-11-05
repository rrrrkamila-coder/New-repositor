// 2.4. Измерение времени выполнения с помощью clock()
#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    clock_t start = clock();

    long long sum = 0;
    for (int i = 0; i < 100000000; i++)
    {
        sum += i % 7;
    }

    clock_t finish = clock();
    double seconds = static_cast<double>(finish - start) / CLOCKS_PER_SEC;
    cout << "Сумма: " << sum << endl;
    cout << "Время (clock): " << seconds << " с" << endl;
    return 0;
}
