#include "include/libasm.h"

void	ft_test_strlen()
{
	printf("-------------------ft_strlen-------------------\n");
	printf("with \"test12345\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("test12345"));
	printf("strlen : \n");
	printf("%zd\n", strlen("test12345"));
	printf("----------\n");
	printf("with \"1\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("1"));
	printf("strlen : \n");
	printf("%zd\n", strlen("1"));
	printf("----------\n");
	printf("with \"test\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("test"));
	printf("strlen : \n");
	printf("%zd\n", strlen("test"));
	printf("----------\n");
	printf("with \"\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen(""));
	printf("strlen : \n");
	printf("%zd\n", strlen(""));
	printf("----------\n");
	printf("with \"\\n\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("\n"));
	printf("strlen : \n");
	printf("%zd\n", strlen("\n"));
	printf("----------\n");
	printf("with \"zzzzzzzzzzzzzzzzzzzzzzzz hey\" \n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
	printf("strlen : \n");
	printf("%zd\n", strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
}

void	ft_test_strcpy()
{
	char 	buf[100] = {0};

	printf("-------------------ft_strcpy-------------------\n");
	printf("with \"\" \n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(buf, ""));
	printf("strcpy : \n");
	printf("%s\n", strcpy(buf, ""));
	printf("----------\n");
	printf("with \"abc\" \n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(buf, "abc"));
	printf("strcpy : \n");
	printf("%s\n", strcpy(buf, "abc"));
	printf("----------\n");
	printf("with \"asl;fjl;asdjfjkasdl;fjadjsf\" \n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(buf, "asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("strcpy : \n");
	printf("%s\n", strcpy(buf, "asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("----------\n");
	printf("with \"yope\\0la\" \n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(buf, "yope\0la"));
	printf("strcpy : \n");
	printf("%s\n", strcpy(buf, "yope\0la"));
	printf("----------\n");
}

void	ft_test_strcmp()
{
	printf("-------------------ft_strcmp-------------------\n");
	printf("with \"\" and \"salut\" \n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("", "salut"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("", "salut"));
	printf("----------\n");
	printf("with \"salut\" and \"\" \n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("salut", ""));
	printf("strcmp : \n");
	printf("%d\n", strcmp("salut", ""));
	printf("----------\n");
	printf("with \"bonjour\" and \"salut\" \n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("bonjour", "salut"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("bonjour", "salut"));
	printf("----------\n");
	printf("with \"the\\0hidden\" and \"thehidden\" \n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("the\0hidden", "thehidden"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("the\0hidden", "thehidden"));
	printf("----------\n");
	printf("with \"Lorem ipsum dolor st amet, consectetur adipiscing\" and \"Lodsfsdfasdf\" \n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"));
	printf("----------\n");
}

void	ft_test_write()
{
	printf("-------------------ft_write-------------------\n");
	printf("with fd = 0, str = \"salut\" and size = 6 \n");
 	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "salut", 6));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "salut", 6));
	printf("----------\n");

	printf("with fd = 0, str = \"test\" and size = 2 \n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "test", 2));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "test", 2));
	printf("----------\n");

	printf("with fd = 0, str = \"test\" and size = 1 \n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(0, "test", 1));
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(0, "test", 1));
	printf("----------\n");

	printf("with fd = 300, str = \"salut\" and size = 9 \n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(300, "salut", 9));
 	printf("errno : %d\n", errno);
	printf("write : \n");
	errno = 0;
	printf("\nreturn = %zd\n", write(300, "salut", 9));
 	printf("errno : %d\n", errno);
	printf("----------\n");

	printf("with fd = 1, str = NULL and size = 9 \n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(1, NULL, 9));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(1, NULL, 9));
 	printf("errno : %d\n", errno);
	printf("----------\n");

	printf("with fd = -1, str = \"test\" and size = 5 \n");
	printf("ft_write : \n");
	printf("\nreturn = %zd\n", ft_write(-1, "test", 5));
 	printf("errno : %d\n", errno);
	errno = 0;
 	printf("write : \n");
	printf("\nreturn = %zd\n", write(-1, "test", 5));
 	printf("errno : %d\n", errno);
	printf("----------\n");
}

void	ft_test_strdup()
{
	printf("-------------------ft_strdup-------------------\n");
	printf("with \"\\n\"\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("\n"));
	printf("strdup : \n");
	printf("%s\n", strdup("\n"));
	printf("----------\n");
	printf("with \"\"\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup(""));
	printf("strdup : \n");
	printf("%s\n", strdup(""));
	printf("----------\n");
	printf("with \"abc\"\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("abc"));
	printf("strdup : \n");
	printf("%s\n", strdup("abc"));
	printf("----------\n");
	printf("with \"asl;fjl;asdjfjkasdl;fjadjsf\"\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("strdup : \n");
	printf("%s\n", strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("----------\n");
	printf("with \"yope\\0la\"\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("yope\0la"));
	printf("strdup : \n");
	printf("%s\n", strdup("yope\0la"));
	printf("----------\n");
	printf("with long str \n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
	printf("strdup : \n");
	printf("%s\n", strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
}

void	ft_test_read()
{
	char		buff[100];
	int         fd;
	ssize_t     ret;

	printf("-------------------ft_read-------------------\n");
	printf("ft_read : \n");   
	fd = open("Makefile", O_RDONLY);
	ret = ft_read(fd, buff, 100);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);
	bzero(buff, 100);
	printf("read : \n");
	fd = open("Makefile", O_RDONLY);
	ret = read(fd, buff, 100);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);
	bzero(buff, 100);
	printf("----------\n");

	printf("ft_read : \n");
	fd = open("random.txt", O_RDONLY);
	ret = ft_read(fd, buff, 10);
	printf("errno : %d\n", errno);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);
	bzero(buff, 100);
	errno = 0;
	printf("read : \n");
	fd = open("random.txt", O_RDONLY);
	ret = read(fd, buff, 10);
	printf("errno : %d\n", errno);
	buff[ret] = '\0';
	printf("buff = %sret = %zd\n", buff, ret);
	close(fd);
	bzero(buff, 100);
	printf("----------\n");

	char	buf_read[2048];
	int 	tmp[2];

	bzero(buf_read, 2048);
	printf("ft_read : \n");
	ret = ft_read(-1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	bzero(buf_read, 2048);
	errno = 0;
	printf("read : \n");
	ret = read(-1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	bzero(buf_read, 2048);
	printf("----------\n");

	printf("ft_read : \n");
	ret = ft_read(tmp[0], NULL, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	bzero(buf_read, 2048);
	errno = 0;
	printf("read : \n");
	ret = read(tmp[0], NULL, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	bzero(buf_read, 2048);
	printf("----------\n");

	printf("ft_read : \n");
	ret = ft_read(OPEN_MAX + 1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(OPEN_MAX + 1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
}

int		main(int ac, char **av)
{
	if (ac > 1 && strcmp(av[1], "ft_strlen") == 0)
		ft_test_strlen();
	else if (ac > 1 && strcmp(av[1], "ft_strcpy") == 0)
		ft_test_strcpy();
	else if (ac > 1 && strcmp(av[1], "ft_strcmp") == 0)
		ft_test_strcmp();
	else if (ac > 1 && strcmp(av[1], "ft_write") == 0)
		ft_test_write();
	else if (ac > 1 && strcmp(av[1], "ft_strdup") == 0)
		ft_test_strdup();
	else if (ac > 1 && strcmp(av[1], "ft_read") == 0)
		ft_test_read();
	return (0);
}
