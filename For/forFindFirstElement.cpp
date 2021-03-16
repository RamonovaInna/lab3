#include <cmath>
#include "func.h"

namespace forLoop
{
	int findFirstElement(double eps)
	{
		int output;

		for (int i = 0; ; i++)
		{
			if (abs(a(i)) <= eps) {
				output = i;
				break;
			}
		}

		return output;
	}
}