// 3. Обеспечение качества кода: самодокументируемый код, соглашение о кодировании
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

/// <summary>Складывает два целых числа.</summary>
/// <param name="firstNumber">Первое слагаемое.</param>
/// <param name="secondNumber">Второе слагаемое.</param>
/// <returns>Сумма двух чисел.</returns>
/// <remarks>Переполнение типа int не проверяется.</remarks>
/// <example>int result = Add(2, 3); // result = 5</example>
int Add(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

/// <summary>Возводит число в квадрат.</summary>
/// <param name="number">Исходное число.</param>
/// <returns>Квадрат числа.</returns>
/// <remarks>Для больших значений возможно переполнение.</remarks>
/// <example>int result = Square(4); // result = 16</example>
int Square(int number)
{
    return number * number;
}

/// <summary>Проверяет, что число положительное.</summary>
/// <param name="number">Проверяемое число.</param>
/// <returns>true, если число больше нуля, иначе false.</returns>
/// <remarks>Ноль положительным не считается.</remarks>
/// <example>bool result = IsPositive(5); // result = true</example>
bool IsPositive(int number)
{
    return number > 0;
}

/// <summary>Определяет длину строки.</summary>
/// <param name="text">Исходная строка.</param>
/// <returns>Количество символов в строке.</returns>
/// <remarks>Для многобайтовых кодировок считаются байты.</remarks>
/// <example>size_t length = GetTextLength("abc"); // length = 3</example>
size_t GetTextLength(const string& text)
{
    return text.length();
}

/// <summary>Выводит приветствие на экран.</summary>
/// <param name="userName">Имя пользователя.</param>
/// <returns>Ничего не возвращает.</returns>
/// <remarks>Вывод выполняется в стандартный поток.</remarks>
/// <example>PrintGreeting("Камила");</example>
void PrintGreeting(const string& userName)
{
    cout << "Привет, " << userName << "!" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Add(2, 3) = " << Add(2, 3) << endl;
    cout << "Square(4) = " << Square(4) << endl;
    cout << "IsPositive(5) = " << boolalpha << IsPositive(5) << endl;
    cout << "GetTextLength(\"Git\") = " << GetTextLength("Git") << endl;
    PrintGreeting("Камила");
    return 0;
}
