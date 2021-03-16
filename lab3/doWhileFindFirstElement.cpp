#include <iostream>
#include <cmath>
#include "func.h"

using namespace std;

namespace doWhileLoop
{
	int findFirstElement(double eps)
	{
		int i = 0;

		do
		{
			i++;
		} while (!(abs(a(i)) <= eps));

		return i;
	}
}