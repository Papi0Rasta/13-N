/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:59:05 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 14:59:05 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1,&c,1);
}

void	ft_print_comb2(void){
	int n1 = 0;
	int n2;
	while(n1 <= 99){
		n2=0;
		while(n2 <= 99){
			if(n1 != n2 && n1 != 99){
				ft_putchar(n1 / 10 + '0');
				ft_putchar(n1 % 10 + '0');
				ft_putchar(' ');
				ft_putchar(n2 / 10 + '0');
				ft_putchar(n2 % 10 + '0');
				if(n1 != 98 || n2 != 99){
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
}

int	main(){
	ft_print_comb2();
	return 0;
}
