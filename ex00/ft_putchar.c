/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:30:16 by nongona           #+#    #+#             */
/*   Updated: 2020/07/15 11:34:25 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}
