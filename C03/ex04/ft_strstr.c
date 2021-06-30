/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:47:12 by nors              #+#    #+#             */
/*   Updated: 2021/06/29 12:47:12 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find){
	char *b_str;
	char *b_to_find;
	if(!*to_find)
		return str;
	while(*str){
		b_str = str;
		b_to_find = to_find;
		while(*b_str == *b_to_find){
			b_str++;
			b_to_find++;
		}
		if(!*b_to_find){
			return str;
		}
		str++;
	}
	
}
