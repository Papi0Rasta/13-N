/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:31:43 by nors              #+#    #+#             */
/*   Updated: 2021/07/03 08:31:43 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c){
        write(1,&c,1);
}

void    ft_putnbr(int nb){
        if(nb > 9){
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + '0');
        }else if(nb >= 0){
                ft_putchar(nb + '0');
        }else{
                ft_putchar('-');
                ft_putnbr(nb * -1);
        }
}

int	ft_sqrt(int nb){
	double time = nb;
	int i=0;
	if(nb < 0)
		return 0;
	while(i != nb){
		time = (nb/time + time)/2;
		i++;
	}
	return time;
}

int	main(){
	ft_putnbr(ft_sqrt(25));
	return 0;
}
