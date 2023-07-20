#include "main.c"

/**
 * rm_shell - is to remove directory
 *
 * @datash: date relevant
 * Return: Always (successs)
 */

int rm_shell(shell *datash)
{
	int ishome; ishome1;

	dir = datash->args[1];

	if (dir == NULL || !ishome || !ishome1)
	{
		rm_to_home(datash);
		return (0);
	}

	if (strcmp("-", dir) == 0)
	{
		rm_objects(datash);
		return (1);
	}

	rm_to(datash);

	return (1);
}
