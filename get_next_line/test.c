#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


char *test(int fd)
{
	static char buffer[1024];
	read(fd, buffer, 3);

	return (buffer);
}

int main(void)
{
	int fd;

	fd = open("test.txt", O_RDONLY);

	printf("%s\n", test(fd));
	printf("%s\n", test(fd));
	printf("%s\n", test(fd));
}
