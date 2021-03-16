#include <iostream>
#include <cmath>
#include "func.h"

namespace doWhileLoop
{
	void print(int n, int k)
	{
		int count = 1, i = 0;

		do
		{
			if (count != k)
			{
				count++;
				std::cout << a(i) << " ";
			}
			else {
				count = 1;
			}

			i++;
		} while (i < n);
	}
}