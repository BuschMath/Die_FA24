#include "Die.h"
#include <time.h>
#include <stdlib.h>

Die::Die()
{
	value = 0;
	sides = 1;
	srand(time(NULL));
}

Die::~Die()
{
}

int Die::roll()
{
	return rand() % sides + 1;
}

int Die::getValue()
{
	return value;
}

int Die::getSides()
{
	return sides;
}

void Die::setSides(int sides_)
{
	sides = sides_;
}
