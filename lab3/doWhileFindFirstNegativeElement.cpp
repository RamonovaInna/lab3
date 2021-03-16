#include <cmath>
#include "func.h"

namespace doWhileLoop
{
	int findFirstNegativeElement(double eps)
	{
		int output, i = 0;

		do
		{
			if ((abs(a(i)) <= eps) && (a(i) < 0)) {
				output = i;
				break;
			}

			i++;
		} while (true);

		return output;
	}
}