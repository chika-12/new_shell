#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
	char buffer[100];
	while (1)
	{
		printf("chika$ ");
		if (fgets(buffer, sizeof(buffer), stdin) == NULL)
		{
			perror("Error");
			exit(EXIT_SUCCESS);
		}
		buffer[strcspn(buffer, "\n")] == '\0';
		printf("%s", buffer);
	}
	return (0);
}
