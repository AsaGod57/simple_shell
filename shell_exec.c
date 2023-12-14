#include "shell.h"

/**
 * exec - Starts to create a new child process
 * @arguments: Specifies array of inputs by the user
 * Return: 0 on success (Ends)
 */
int exec(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;

	pid = fork();
	if (pid == -1)
		_printp("failed\n", 7);
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		}
		exit(0);
	}
	else
		wait(&stat);
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
	}
