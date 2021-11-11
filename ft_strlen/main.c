#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int ft_strlen(char *s);

int		main(int ac, char **av)
{
	if (ac > 1) {
		printf("string.h %zu\n", strlen(av[1]));
		printf("asm %d\n", ft_strlen(av[1]));
	}
	return (0);
}
