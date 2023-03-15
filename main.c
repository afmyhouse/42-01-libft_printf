/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:54:42 by antoda-s          #+#    #+#             */
/*   Updated: 2023/03/15 00:16:17 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* cc -Werror -Wall -Wextra -o main main.c libft.a */
int	main(void)
{
	int	i;

	i = ft_strlen("HelloWorld!");
	ft_printf("Teste %i\n", 42);
	ft_printf("ft_strlen(HelloWorld!) = %i\n", i);
	ft_printf("Teste string = %s\n", ft_strdup("Hello World!"));
	ft_printf("Teste string = %s\n", ft_strjoin("Hello World!", "How are you?"));
}
