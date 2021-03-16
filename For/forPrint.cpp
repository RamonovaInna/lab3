#include <iostream>
#include <cmath>
#include "func.h"

namespace forLoop
{
	void print(int n, int k)
	{
		int count = 1;

		for (int i = 0; i < n; i++)
		{
			if (count != k)
			{
				count++;
				std::cout << a(i) << " ";
			}
			else {
				count = 1;
				continue;
			}
		}
	}
}

