/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:02:58 by ddyankov          #+#    #+#             */
/*   Updated: 2022/12/13 11:00:50 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *f, ...);
int		ft_putnbr(int n, int *len);
int		ft_pos_nbr(unsigned int n, int *len);

size_t	ft_strlen(char *s);

void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);

#endif
