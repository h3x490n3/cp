#include <stdio.h>

int		main()
{
	char *s1 = "abc";
	char *s2 = "abc";
	
	foo ((void *)s1, (void *)s2);

	printf("%s|%s\n", s1,s2);
	return 0;
}