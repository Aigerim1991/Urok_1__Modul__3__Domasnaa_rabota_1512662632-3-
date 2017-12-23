#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	cout.setf(ios::boolalpha);
	setlocale(LC_ALL, "RUS");
bigboss:
	int N;
	cout << "Введите номер задания:" << "\n";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int h;
		cout << "Часы" << "\n";
		cin >> h;
		int m;
		cout << "Минуты" << "\n";
		cin >> m;
		int s;
		cout << "Секунды" << "\n";
		cin >> s;
		int f = 0;
		int day = 0;
		if (s > 0 && m > 0 && h > 0)
			f = s + m * 60 + h * 3600;
		cout << "f:" << "" << f << "\n";
		if (s>0)
			s = h % 3600 + m / 60 + s;

		cout << "s с прошедшего дня" << "" << s << endl;



	}
	break;
	case 2:
	{
		int m;
		cout << "Месяц:" << "\n";
		cin >> m;
		int d = 30;
		switch (m)
		{
		case 1:
		{
			int m1 = d + 0;
			cout << m1 << "\n";
		}
		break;
		case 2:
		{
			int m2 = d + 31;
			cout << m2 << "\n";
		}
		break;
		case 3:
		{
			int m3 = d + 60;
			cout << m3 << "\n";
		}
		break;
		case 4:
		{
			int m4 = d + 91;
			cout << m4 << "\n";
		}
		break;
		case 5:
		{
			int m5 = d + 121;
			cout << m5 << "\n";
		}
		break;
		case 6:
		{
			int m6 = d + 152;
			cout << m6 << "\n";
		}
		break;
		case 7:
		{
			int m7 = d + 182;
			cout << m7 << "\n";
		}
		break;
		case 8:
		{
			int m8 = d + 213;
			cout << m8 << "\n";
		}
		break;
		case 9:
		{
			int m9 = d + 244;
			cout << m9 << "\n";
		}
		break;
		case 10:
		{
			int m10 = d + 274;
			cout << m10 << "\n";
		}
		break;
		case 11:
		{
			int m11 = d + 305;
			cout << m11 << "\n";
		}
		break;
		case 12:
		{
			int m12 = d + 335;
			cout << m12 << "\n";
		}
		break;
		default:
			break;
		}

	}
	break;

	case 3:
	{
		int m;
		cout << "Месяц:" << "\n";
		cin >> m;

		int d1 = 30;

		switch (m)
		{
		case 1:
		{
			int g = 365;
			int m1 = 0;
			if (g - (g / 4) * 4 == 0)
				m1 = d1 + 0;
			cout << "В первом месяце количество дней:" << m1 << "\n";


		}
		break;
		case 2:
		{
			int g = 365;
			int m2 = 0;
			if (g - (g / 4) * 4 == 0)
				m2 = d1 + 28;
			else  m2 = d1 + 29;
			cout << "Во втором месяце количество дней:" << m2 << "\n";
		}
		break;
		case 3:
		{
			int g = 365;
			int m3 = 0;
			if (g - (g / 4) * 4 == 0)
				m3 = d1 + 58;

			else  m3 = d1 + 60;
			cout << "В третьем месяце количество дней:" << m3 << "\n";
		}
		break;
		case 4:
		{
			int g = 365;
			int m4 = 0;
			if (g - (g / 4) * 4 == 0)
				m4 = d1 + 90;
			else  m4 = d1 + 91;
			cout << "В четвертом месяце количество дней:" << m4 << "\n";
		}
		break;
		case 5:
		{
			int g = 365;
			int m5 = 0;
			if (g - (g / 4) * 4 == 0)
				m5 = d1 + 120;
			else  m5 = d1 + 121;
			cout << "В пятом месяце количество дней:" << m5 << "\n";
		}
		break;
		case 6:
		{
			int g = 365;
			int m6 = 0;
			if (g - (g / 4) * 4 == 0)
				m6 = d1 + 150;
			else  m6 = d1 + 152;
			cout << "В шестом месяце количество дней:" << m6 << "\n";
		}
		break;
		case 7:
		{
			int g = 365;
			int m7 = 0;
			if (g - (g / 4) * 4 == 0)
				m7 = d1 + 180;
			else  m7 = d1 + 182;
			cout << "В седьмом месяце количество дней:" << m7 << "\n";
		}
		break;
		case 8:
		{
			int g = 365;
			int m8 = 0;
			if (g - (g / 4) * 4 == 0)
				m8 = d1 + 210;
			else  m8 = d1 + 213;
			cout << "В восьмом месяце количество дней:" << m8 << "\n";
		}
		break;
		case 9:
		{
			int g = 365;
			int m9 = 0;
			if (g - (g / 4) * 4 == 0)
				m9 = d1 + 240;
			else  m9 = d1 + 244;
			cout << "В девятом месяце количество дней:" << m9 << "\n";
		}
		break;
		case 10:
		{
			int g = 365;
			int m10 = 0;
			if (g - (g / 4) * 4 == 0)
				m10 = d1 + 270;
			else  m10 = d1 + 274;
			cout << "В десятом месяце количество дней:" << m10 << "\n";
		}
		break;
		case 11:
		{
			int g = 365;
			int m11 = 0;
			if (g - (g / 4) * 4 == 0)
				m11 = d1 + 300;

			else  m11 = d1 + 305;
			cout << "В одиницитом месяце количество дней:" << m11 << "\n";
		}
		break;
		case 12:
		{
			int g = 365;
			int m12 = 0;
			if (g - (g / 4) * 4 == 0)
				m12 = d1 + 330;
			else  m12 = d1 + 335;
			cout << "В двенадцатом месяце количество дней:" << m12 << "\n";
		}
		break;
		default:
			break;
		}
	}
	break;
	case 4:
	{
		int f(int& m1, int& m0, int N);
		int N = 10 + rand() % 90;
		if (N < 0) return -1;
		if (N > 99) return 1;
		int m0 = N % 10;
		int m1 = (N - m0) / 10;
		cout << "N=" << N << ", m1=" << m1 << ", m0=" << m0 << endl;
		
	}
	break;
	case 5:
	{
		int f(int m1, int m2, int m3);
	
		int m1=10+rand ()%99;	
		int m2 = m1 % 10;
		int m3 = (m1 - m2) / 10;
		if (m2 < m1 && m2<m3) m2;
		cout << "Наименьшое число m2=" << m2 << "\n";
		  if (m3 < m2 && m3<m1)  m3;
   		cout << "Наименьшое число m3=" << m3 << endl;
		
	

		
	}
	break;
	case 6:
	{
		bool f;
		int m;
		cout << "Ввести число:" << "\n";
		cin >> m;
		int n;
		cout << "Ввести число:" << "\n";
		cin >> n;
		f =  (n%m ==0);// true;
		cout << "n кратно m" <<"" <<f << endl;
		f = (n%m < 0);// false;
		cout << "Значение меньше 0" <<""<< f <<endl;
	}
	break;
	default:
		break;

	}


	goto bigboss;
	return 0;


















}