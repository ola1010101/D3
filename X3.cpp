#include <iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "ru");
	
	//1
	int a = 0, summ = 0, n = 500, b = 0;
	std::cout << "������� ����� ";
	std::cin >> a;
	b = a;
	for (int a = b; a <= n; a++ )
	{
		summ = a + summ;
	}
	std::cout << "����� �� " << b << " �� " << n << " ������������, �����: " << summ << "\n\n";
	
	
	//2
	int x = 0, y = 0, degree = 0;
	std::cout << "���������� x � ������� y\n";
	std::cout << "������� ����� x ";
	std::cin >> x;
	std::cout << "������� ����� y ";
	std::cin >> y;
	degree = pow(x, y);
	std::cout << x << " � " << y << " ������� �����: " << degree << "\n\n";
	

	//3
	int  nKon = 1000, i = 0; n = 0;
	float srAr = 0;
	i = n;
	for (int n = i; n <= nKon; n++)
	{
		srAr = srAr + n;
	}
	srAr = srAr / nKon;
	std::cout << "������� �������������� �� 1 �� 1000 �����: " << srAr << "\n\n";
	

	//4
	a = 0; nKon = 20; i = 1; int compos = 1,a1 = 0;
	std::cout << "������������ ���� ����� ����� �� a �� 20 \n";
	std::cout << "������� �������� a ������� ������ 1 ";
	std::cin >> a;
	a1 = a;
	if (a >= i && a <= nKon)
	{
		for (int a = a1; a <= nKon; a++)
		{
			compos = compos * a;
		}
		std::cout << "������������ ����� �� " << a1 << " �� 20 �����: " << compos << "\n\n";
	}
	else
	{
		std::cout << "a ������ ���� �� 1 �� 20 \n";
	}

	
}
