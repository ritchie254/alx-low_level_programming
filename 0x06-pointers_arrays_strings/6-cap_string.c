#include "main.h"

/**
  */

char *cap_string(char *value)
{
	int size = sizeof(value) - 1;
	int i;

	for (i = 0; i <= size; i++)
	{
		if (value[i] == '.' && value[i + 1] == ' ')
		{
			value[i + 2] = value[i + 2] - 32;
		}
		else if (value[i] == ' ')
		{
			value[i + 1] = value[i + 1] - 32;
		}
		else if ((value[i] == '\\' && value[i + 1] == 'n') || (value[i] == '\\' && value    [i + 1] == 't'))
				value[i + 2] = value[i + 2] - 32;
		
	}
	return (value);
}
