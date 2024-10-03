// libft.h
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memccpy( void* restrict dest, const void* restrict src, int c, unsigned int count);
void    *memmove(void *dest, const void *src, unsigned int n);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strdup(const char *s1);
int     ft_putstr(char *s);
void    ft_putchar(char c);
char    *ft_isaplha(char *str);
char    *ft_strcat(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strjoin(char const *s1, char const *s2);
int     ft_strlen(char *str);
unsigned int    ft_strlcpy(char *dest, const char *src, unsigned int size);

#endif
