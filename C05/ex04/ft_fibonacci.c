/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:53:04 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 17:53:04 by nors             ###   ########.fr       */
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

int	ft_fib(int index, int next_index){
	int temp;
	if(index >= 0){	
		ft_putnbr(index);	
		ft_putchar(',');
		ft_putchar(' ');
		temp = index;
		index += next_index;
		next_index = temp;
		return ft_fib(index,next_index);
	}
}

int	ft_fibonacci(int index){
	if(index < 0)
		return -1;
	if(index >= 0)
		return ft_fib(index, 1);
}

int     main(){
        ft_fibonacci(0);
        return 0;
}
