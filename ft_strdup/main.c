#include 	<stdio.h>
#include 	<stdlib.h>
#include 	<string.h>

extern char *ft_strdup(const char *s);

int			main(int ac, char **av)
{
	char 	*str;

	char	 *s1;
	char	 *s2;
	int		size = 0;

	if (ac > 1) {
		str = av[1];

		//s1 = strdup(str);

		s2 = ft_strdup(str);
		//printf("strlen s1 %lu", strlen(s1));
		//printf("strlen s2 %lu", strlen(s2));
		//size = ft_strdup(str);

		//printf("strdup = %s", s1);
		//if (s2)
			printf("ft_strdup = %s", s2);
		//printf("ft_strdup = %d\n", size);
	}
	return (0);
}
