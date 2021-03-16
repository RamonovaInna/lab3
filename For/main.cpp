#include <iostream>
#include <locale>
#include <cmath>
#include "func.h"

using namespace std;
using namespace forLoop;

int main()
{

	int k;
	double n;

	while (true)
	{
		cout << "1 forsumm(int n) \n";
		cout << "2 forsumm2(double eps)\n";
		cout << "3 forprint(int n ,int k) \n";
		cout << "4 forfindFirstElement(double eps) \n";
		cout << "5 forfindFirstNegativeElement(double eps \n";
		cout << "6 Exit \n";

		cin >> k;


		switch (k)
		{
		case 1:
			system("cls");
			cout << "Insert n: \n";
			cin >> k;
			cout << "Result: " << summ(k) << "\n" << endl;
			cout << "\n" << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << "Insert eps: \n";
			cin >> n;
			cout << "Result: " << summ2(n) << "\n" << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "Insert n, k: \n";
			cin >> n;
			cin >> k;
			print(n, k);
			cout << "\n" << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "Insert eps: \n";
			cin >> n;
			cout << "Result: " << findFirstElement(n) << "\n" << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			cout << "Insert eps: \n";
			cin >> n;
			cout << "Result: " << findFirstNegativeElement(n) << "\n" << endl;
			system("pause");
			system("cls");
			break;
		case 6:
			return 1;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}
