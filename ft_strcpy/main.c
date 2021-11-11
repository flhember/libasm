#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*size_t ft_strlen(char *s) {
	size_t		i = 0;

	while (s[i++]);
	return (i - 1);
}*/

//extern int ft_strlen(char *s);
extern char *ft_strcpy(char * destination, const char * source);

int		main(int ac, char **av)
{
	char	*dest;

	dest = NULL;
	if (ac > 1) {
		if (!(dest = malloc((sizeof(char) * (strlen(av[1]) + 1)))))
			return -1;

		//printf("string.h %zu\n", strlen(av[1]));
		//printf("asm %d\n", ft_strlen(av[1]));

		//printf("string.h %s\n", strcpy(dest, av[1]));
		printf("asm %s\n", ft_strcpy(dest, av[1]));
		free(dest);
	}
	return (0);
}
