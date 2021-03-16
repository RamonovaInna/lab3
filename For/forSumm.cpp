#include <cmath>
#include "func.h"

namespace forLoop
{
	double summ(int n)
	{
		double sum = 0;

		for (int i = 0; i < n; i++) {
			sum = sum + a(i);
		}

		return sum;
	}
}