/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:44:48 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 15:44:48 by nors             ###   ########.fr       */
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

int     ft_recursive_factorial(int nb){
	int time = nb - 1;
        if(time < 0){
                return 0;
        }else if(time == 0){
                return 1;
        }else if(time > 0){
        	return (nb * ft_recursive_factorial(nb-1));
	}
}
int     main(){
        ft_putnbr(ft_recursive_factorial(3));
        return 0;
}
