/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:45:23 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 19:45:23 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *fr_strlowcase(char *str){
        int i = 0;
        while(str[i]){
                if(str[i] >= 'A' && str[i] <= 'Z'){
                        str[i] = str[i] + 32;
                }
                i++;
        }
        return str;
}
