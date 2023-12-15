#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *line;

	fd = open("asd.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	line = get_next_line(fd);
	printf("%s\n", line);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	close(fd);
	return (0);
}