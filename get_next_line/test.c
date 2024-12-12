#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char *test(int fd)
{
	char	buffer[1024];
	char	*s;
	int i = 0;
	read(fd, buffer, 1);
	read(fd, buffer, 1);
	read(fd, buffer, 1);
	while (buffer[i])
	{
		s[i] = buffer[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int test1(void)
{
	int x;

	x = 0;
	x++;
	return (x);
}

int main(void)
{
	char *buffer;
	int fd;

	fd = open("test.txt", O_RDONLY);
	buffer = test(fd);
	printf("%s\n", buffer);
}
