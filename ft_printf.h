/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:02:58 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 23:17:49 by ddyankov         ###   ########.fr       */
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
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);

#endif
