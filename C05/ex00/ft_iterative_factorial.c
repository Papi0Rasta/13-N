/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:16:16 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 15:16:16 by nors             ###   ########.fr       */
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

int	ft_iterative_factorial(int nb){
	int time = nb - 1;
	if(nb < 0){
		return 0;
	}else if(nb == 0){
		return 1;
	}
	while(time > 0){
		nb *= time;
		time--;
	}
	return nb;
}
int	main(){
	ft_putnbr(ft_iterative_factorial(3));
	return 0;
}
