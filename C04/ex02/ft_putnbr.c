/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 00:41:15 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 00:41:15 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1,&c,1);
}

void	ft_putnbr(int nb){
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

int	main(){
	ft_putnbr(-55);
	return 0;
}
