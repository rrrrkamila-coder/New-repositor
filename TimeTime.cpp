// 2.4. Измерение времени выполнения с помощью time() и difftime()
#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    time_t start = time(nullptr);

    long long sum = 0;
    for (int i = 0; i < 100000000; i++)
    {
        sum += i % 7;
    }

    time_t finish = time(nullptr);
    cout << "Сумма: " << sum << endl;
    // time() считает с точностью до секунды, поэтому для короткой операции может быть 0
    cout << "Время (time): " << difftime(finish, start) << " с" << endl;
    return 0;
}
