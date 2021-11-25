#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
# define	BUF_SIZE	100

extern size_t 	ft_strlen(char *s);
extern char 	*ft_strcpy(char * destination, const char * source);
extern int 		ft_strcmp(const char *s1, const char *s2);
extern ssize_t 	ft_write(int fd, const void *buf, size_t count);
extern char 	*ft_strdup(const char *s);
ssize_t 		ft_read(int fd, void *buf, size_t count);

int main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	char	*dest;

	dest = NULL;
	s1 = NULL;
	s2 = NULL;
	printf("-------ft_strlen-------\n");
	if (ac >= 2) {
		printf("with %s \n", av[1]);
		printf("string.h = %zu\n", strlen(av[1]));
		printf("libasm = %zu\n", ft_strlen(av[1]));
	}
	printf("-----------------------\n");

	printf("\n-------ft_strcpy-------\n");
	if (ac >= 2) {
		printf("with %s\n", av[1]);
		if (!(dest = malloc((sizeof(char) * (strlen(av[1]) + 1)))))
			return -1;
		printf("string.h = %s\n", strcpy(dest, av[1]));
		bzero(dest, strlen(av[1]));
		printf("libasm = %s\n", ft_strcpy(dest, av[1]));
	}
	printf("-----------------------\n");

	printf("\n-------ft_strcmp-------\n");
	if (ac >= 3) {
		printf("with %s and %s\n", av[1], av[2]);
		printf("string.h %d\n", strcmp(av[1], av[2]));
		printf("libasm %d\n", ft_strcmp(av[1], av[2]));
	}
	printf("-----------------------\n");

	printf("\n-------ft_write-------\n");
	if (ac >= 4) {
		printf("with %s and fd av[3] = %s\n", av[2], av[3]);
		write(1,"unistd.h = ", 11);
		write(atoi(av[3]), av[2], strlen(av[2]));
		write(1,"\n" ,1);
		write(1,"libasm = ", 9);
		ft_write(atoi(av[3]), av[2], strlen(av[2]));
		write(1,"\n" ,1);
	}
	printf("-----------------------\n");

	printf("\n-------ft_strdup-------\n");
	if (ac >= 2) {
		printf("with %s\n", av[1]);
		s1 = strdup(av[1]);
		s2 = ft_strdup(av[1]);
		printf("string.h = %s\n", s1);
		printf("libasm = %s\n", s2);
	}
	printf("-----------------------\n");

	printf("\n-------ft_read-------\n");
	int 	fd = 1;
	size_t	size = 0;
	char	buf[BUF_SIZE];
	char	buf2[BUF_SIZE];

	if ((size = read(fd, buf, BUF_SIZE)) < 0)
	{
		printf("errno return = %d", errno);
		return (-1);
	}
	else
		buf[size] = '\0';
	printf("unistd = %s | return = %zu\n", buf, size);
	size = 0;
	if ((size = ft_read(fd, buf2, BUF_SIZE)) < 0)
	{
		printf("errno return = %d", errno);
		return (-1);
	}
	else
		buf2[size] = '\0';
	printf("libasm = %s | return = %zu\n", buf2, size);
	printf("-----------------------\n");
	return (0);
}
