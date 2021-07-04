/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 16:58:00 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 16:58:00 by nors             ###   ########.fr       */
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

int     ft_iterative_power(int nb, int power){
		int time = power;
		int org_nb = nb;
		if(nb == 0 && power == 0)
			return 1;
		while(time > 1){
			nb *= org_nb;
			time--;
		}
		return nb;	
			
}
int     main(){
        ft_putnbr(ft_iterative_power(2,7));
        return 0;
}
