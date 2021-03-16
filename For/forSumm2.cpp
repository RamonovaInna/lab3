#include <cmath>
#include "func.h"

namespace forLoop
{
	double summ2(double eps)
	{
		double sum = 0;

		for (int i = 0; !(abs(a(i)) <= eps); i++) {
			sum += a(i);
		}

		return sum;
	}
}