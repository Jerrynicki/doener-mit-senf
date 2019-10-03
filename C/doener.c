#include <stdio.h>
#include <string.h>
#include "doener.h"

void mit(char arg[])
{
		char senf[5] = "senf";

		if (strcmp(arg, senf) == 0)
				printf("döner mit senf\n");
}
