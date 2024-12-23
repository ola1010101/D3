#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	
	//1
	int a = 0, summ = 0, n = 500, b = 0;
	std::cout << "введите число ";
	std::cin >> a;
	b = a;
	for (int a = b; a <= n; a++ )
	{
		summ = a + summ;
	}
	std::cout << "сумма от " << b << " до " << n << " включительно, равна: " << summ << "\n\n";
	
	
	//2
	int x = 0, y = 0, degree = 0;
	std::cout << "Возведение x в степень y\n";
	std::cout << "введите число x ";
	std::cin >> x;
	std::cout << "введите число y ";
	std::cin >> y;
	degree = pow(x, y);
	std::cout << x << " в " << y << " степени равно: " << degree << "\n\n";
	

	//3
	int  nKon = 1000, i = 0; n = 0;
	float srAr = 0;
	i = n;
	for (int n = i; n <= nKon; n++)
	{
		srAr = srAr + n;
	}
	srAr = srAr / nKon;
	std::cout << "среднее арифметическое от 1 до 1000 равно: " << srAr << "\n\n";
	

	//4
	a = 0; nKon = 20; i = 1; int compos = 1,a1 = 0;
	std::cout << "произведение всех целых чисел от a до 20 \n";
	std::cout << "Введите значание a которое больше 1 ";
	std::cin >> a;
	a1 = a;
	if (a >= i && a <= nKon)
	{
		for (int a = a1; a <= nKon; a++)
		{
			compos = compos * a;
		}
		std::cout << "произведение чисел от " << a1 << " до 20 равно: " << compos << "\n\n";
	}
	else
	{
		std::cout << "a должно быть от 1 до 20 \n";
	}

	
}
