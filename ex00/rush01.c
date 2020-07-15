/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nongona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:42:47 by nongona           #+#    #+#             */
/*   Updated: 2020/07/15 11:44:53 by nongona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include "ft_putchar.c"

void ft_print (int x, char begin, char mid, char end)
{
    ft_putchar(begin);
    while ( (x-1)>1)
    {
        ft_putchar(mid);
        x--;
    }
        if(x>1);
    {
        ft_putchar(end);
        ft_putchar('\n');
    }
}

	void rush (int v,int h)
{
	 char corner;
	 char sidev;
	 char space;
	 char sidesh;
	 
     corner = '/';
	 sidev = '*';
	 sidesh = '92';
	 space = ' ';

    if(v> 0 && h>0)
    {
        ft_print(v, corner, sidev, corner);
        h++;
    
        while(h>1)
        {
            ft_print(v, sidesh, space, sidesh);
            h--;
        }
        if(h>0)
        {
            ft_print(v, corner, sidev, corner);
            h++;
        }
    }
}
