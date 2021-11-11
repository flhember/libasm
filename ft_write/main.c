#include <stdio.h>
#include <unistd.h>
#include <string.h>

ssize_t ft_write(int fd, const void *buf, size_t count);

int		main(int ac, char **av)
{
	int		fd;
	size_t	size;
	char	*str;

	if (ac > 1) {
		fd = 1;
		size = strlen(av[1]);
		str = av[1];

		write(fd, "unistd = ", 9);
		write(fd, str, size);
		write(fd, "\n\nasm = ", 8);
		ft_write(fd, str, size);
	}
	return (0);
}
