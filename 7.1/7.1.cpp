#include <iostream>
#define MODE 1
#ifndef MODE
#error MODE is not defined
#endif 

using namespace std;

#if MODE == 1

double add(double a, double b)
{
	return a + b;
}

#endif

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

#if MODE == 0

	cout << "Работаю в режиме тренировки." << endl;
	return -1;

#elif MODE == 1

	double a = 0.0;
	double b = 0.0;

	cout << "Работаю в боевом режиме." << endl;
	cout << "Введите число 1: ";

	while (!(wcin >> a))
	{
		wcin.clear();
		while (wcin.get() != '\n')
			continue;
		cout << "Пожалуйста, введите число: ";
	}

	cout << "Введите число 2: ";

	while (!(wcin >> b))
	{
		wcin.clear();
		while (wcin.get() != '\n')
			continue;
		cout << "Пожалуйста, введите число: ";
	}

	double result = add(a, b);
	cout << "Результат сложения: " << result << endl;

	return 0;
#else

	cout << "Неизвестный режим. Завершение работы.\n";
	return -2;

#endif
}