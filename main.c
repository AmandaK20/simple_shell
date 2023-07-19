#include "main.h"

/**
 *set_date - date free structure
 *
 *@frest: free structure
 * Return: (0)
 */

void set_data(shell *datash)
{
	unsign int i;

	for (i = 0; datash->_environ[i]; i++)
	{
		set(datash->_environ[i]);
	}

	set(datash->_environ);
	set(datash->pid);
}
