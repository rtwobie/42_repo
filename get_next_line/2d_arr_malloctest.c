#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	char *arr[2];
	int fd;

	fd = open("test.txt", O_RDONLY);
	arr[0] = malloc(sizeof(char) * 5);
	arr[1] = malloc(sizeof(char) * 3);
	read(fd, arr[0], 5);
	read(fd, arr[1], 3);
	printf("%s\n", *arr);
}
