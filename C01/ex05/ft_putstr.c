/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:00:04 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 16:00:04 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str){
	int i=0;
	while(str[i]){
		i++;
	}
	write(1, str,i)
}
