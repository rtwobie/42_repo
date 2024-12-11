#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char *test(int fd)
{
	static char	buffer[1024];
	read(fd, buffer, 100);
	return (buffer);
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
	printf("%d\n", test1());
	printf("%d\n", test1());
	printf("%d\n", test1());
}
