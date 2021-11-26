#ifndef LIBASM_H
# define LIBASM_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# define BUF_SIZE	100

extern size_t 	ft_strlen(char *s);
extern char 	*ft_strcpy(char * destination, const char * source);
extern int 		ft_strcmp(const char *s1, const char *s2);
extern ssize_t 	ft_write(int fd, const void *buf, size_t count);
extern char 	*ft_strdup(const char *s);
ssize_t 		ft_read(int fd, void *buf, size_t count);

#endif
