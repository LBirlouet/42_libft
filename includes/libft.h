/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:40:27 by lbirloue          #+#    #+#             */
/*   Updated: 2023/08/29 11:40:27 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stddef.h>

/*is*/
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

/*string*/
size_t ft_strlen(const char *str);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *s1 ,const char *s2, size_t n);


/*memory*/
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);


/*transformation*/
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);


/*main*/
int main();


#endif