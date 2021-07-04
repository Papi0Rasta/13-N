/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 21:57:22 by nors              #+#    #+#             */
/*   Updated: 2021/07/03 21:57:22 by nors             ###   ########.fr       */
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

int	ft_find_next_prime(int nb){
        int i=2;
	nb++;
        if(nb < 2)
                return 0;
        while(i < nb){
                if(nb % i == 0){
                        return ft_find_next_prime(nb);
                }
                i++;
        }
        return nb;
}

int	main(){
	ft_putnbr(ft_find_next_prime(421));
	return 0;
}
