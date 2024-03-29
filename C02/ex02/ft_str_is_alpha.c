/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:02:25 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 19:02:25 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str){
	while(*str){
		if((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')){
			return 0;
		}
		str++;
	}
	return 1;
}
