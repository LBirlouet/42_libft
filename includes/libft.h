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

/*is*/
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

/*string*/
int ft_strlen(char *str);

/*transformation*/
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);


/*main*/
int main();


#endif