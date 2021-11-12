#include 	<stdio.h>
#include 	<unistd.h>
#include 	<string.h>
# define	BUF_SIZE	100

ssize_t 	ft_read(int fd, void *buf, size_t count);

int			main(int ac, char **av)
{
	int		fd;
	size_t	size;
	char	buf[BUF_SIZE];
	char	buf2[BUF_SIZE];

	fd = 0;
		
	if ((size = read(fd, buf, BUF_SIZE)) < 0)
	{
		printf("ret -1");
		return (-1);
	}
	else 
		buf[size] = '\0';
	printf("unistd = %s| size = %zu\n", buf, size);
	size = 0;
	if ((size = ft_read(fd, buf2, BUF_SIZE)) < 0)
	{
		printf("ret -1");
		return (-1);
	}
	else 
		buf2[size] = '\0';
	printf("asm = %s| size = %zu\n", buf2, size);
	return (0);
}
