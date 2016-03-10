#include "InputFunctions.h"
#include <stdio.h>
#include <stdlib.h>

float getFloat()
{
	float number = 0;
	char *w, c;
	w = (char *)calloc(1, 50);
	int i = 0;
	while (1)
	{
		c = getchar();
		if (c == 10) break;
		w[i] = c;
		i++;
	}

	number = atof(w);
	

	return number;
}