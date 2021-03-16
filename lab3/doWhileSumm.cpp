#include <cmath>
#include "func.h"

namespace doWhileLoop
{
	double summ(int n)
	{
		double sum = 0;
		int i = 0;

		do
		{
			sum += a(i);
			i++;
		} while (i < n);

		return sum;
	}
}