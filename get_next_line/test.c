#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *malloc_test(char *s)
{
	char *mc1;
	char *mc2;

	mc1 = malloc(sizeof(char) * strlen(s));
	mc2 = mc1;
	printf("%p\n", mc1);
	mc1 = malloc(sizeof(char) * strlen(s));
	printf("%p\n", mc1);
	return (s);
}

char *test(int fd) {
	char *s;
    char *buffer = (char *)malloc(1024);  // Allocate memory on the heap
    if (buffer == NULL) {
        perror("malloc failed");
        return NULL;
    }
	s = buffer;
	read(fd, buffer, 1);
	read(fd, buffer, 1);
	read(fd, buffer, 1);
	printf("%s\n", s);
    return buffer;  // Return the pointer to the allocated buffer
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
	malloc_test("hello");
}
