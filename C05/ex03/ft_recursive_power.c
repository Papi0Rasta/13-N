/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:22:52 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 17:22:52 by nors             ###   ########.fr       */
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

int     ft_recursive_power(int nb, int power){
		if(nb == 0 && power == 0)
			return 1;
		if(power == 0)
			return 1;
                if(power-- > 0)
			return (nb * ft_recursive_power(nb,power));

}
int     main(){
        ft_putnbr(ft_recursive_power(5,5));
        return 0;
}
