#include "Func.h"
void fix(int& ch, int& min, int& sek)
{
	if (sek > 60)
	{
		min += (sek / 60);
		sek %= 60;
	}
	if (min > 60)
	{
		ch += (min / 60);
		min %= 60;
	}
}
