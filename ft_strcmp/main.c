#include <stdio.h>
#include <string.h>

extern int ft_strcmp(const char *s1, const char *s2);

int		main(int ac, char **av)
{

	if (ac > 1) {
		printf("string.h %d\n", strcmp(av[1], av[2]));
		printf("asm %d\n", ft_strcmp(av[1], av[2]));
	}
	return (0);
}
