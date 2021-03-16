#include <cmath>
#include "func.h"

namespace doWhileLoop
{
	double summ2(double eps)
	{
		double sum = 0;
		int i = 0;

		do
		{
			sum += a(i);
			i++;
		} while (abs(a(i)) > eps);

		return sum;
	}
}