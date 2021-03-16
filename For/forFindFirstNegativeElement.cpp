#include <cmath>
#include "func.h"

namespace forLoop
{
	int findFirstNegativeElement(double eps)
	{
		int output;

		for (int i = 0; ; i++)
		{
			if ((abs(a(i)) <= eps) && (a(i) < 0)) {
				output = i;
				break;
			}
		}

		return output;
	}
}