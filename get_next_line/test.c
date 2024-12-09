#include <stdio.h>

void *test(void)
{
	static char *line;
	line++;
	return (line);
}

int main(void)
{
	printf("%p\n", test());
	printf("%p\n", test());
	printf("%p\n", test());
}
