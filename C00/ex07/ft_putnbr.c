/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:35:47 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 15:35:47 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1,&c,1);
}

void	ft_putnbr(int nb){
	if(nb >= 0 && nb <= 9){
		ft_putchar(nb + '0');
	}else if(nb > 9){
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}else{
		nb = nb * (-1);
		ft_putchar('-');
		ft_putnbr(nb);
	}
}

int	main(){
	ft_putnbr(42);
	return 0;
}
