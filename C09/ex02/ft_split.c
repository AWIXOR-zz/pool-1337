/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:47:21 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/10 18:14:32 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	has_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && !has_char(charset, str[i]))
			i++;
		while (has_char(charset, str[i]))
			i++;
		count++;
	}
	return (count);
}

int	word_counter(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && !has_char(charset, *str))
	{
		count++;
		str++;
	}
	return (count);
}

char	*create_word(char *str, char *charset, char **word)
{
	int	wcount;
	int	j;

	wcount = word_counter(str, charset);
	*word = malloc(sizeof(char) * (wcount + 1));
	(*word)[wcount] = 0;
	j = 0;
	while (j < wcount)
		(*word)[j++] = *str++;
	while (has_char(charset, *str))
		str++;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words_count;
	int		i;

	while (has_char(charset, *str))
		str++;
	words_count = count_words(str, charset);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (0);
	result[words_count] = 0;
	i = 0;
	while (i < words_count)
	{
		str = create_word(str, charset, result + i);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{	
	int i = 0;
	char **strs = ft_split("abcd--efjh-asdf--hocuine","-");
	if (!strs)
		return 0;
	while(strs[i])
	{
		printf("--> %s\n", strs[i]);
		i++;
	}
}*/
