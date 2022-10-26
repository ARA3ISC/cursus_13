
// #include <stdio.h>

// size_t	count_words(char *str, char c)
// {
// 	size_t	i;
// 	size_t	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] && str[i] == c)
// 		i++;
// 	while (str[i])
// 	{
// 		if (str[i] == c && str[i + 1] != c)
// 		{
// 			count++;
// 		}
// 		i++;
// 	}
// 	if (str[i - 1] != c && str[i] == '\0')
// 		count++;
// 	return (count);
// }

// size_t	word_len(const char *s, char c)
// {
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	len = 0;
// 	while (s[i] == c && s[i])
// 	{
// 		i++;
// 	}
// 	while (s[i] != c && s[i])
// 	{
// 		len++;
// 		i++;
// 	}
// 	return (len);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**ptr;
// 	size_t	words_num;
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;

// 	if (!s)
// 	{
// 		return (NULL);
// 	}
// 	words_num = count_words(s, c);
// 	i = 0;
// 	if (s[0] == '\0')
// 		words_num = 0;
// 	ptr = (char **)malloc(sizeof(char *) * (words_num + 1));
// 	if (!ptr)
// 		return (NULL);
// 	j = 0;
// 	while (i < words_num)
// 	{
// 		while (s[j] && s[j] == c)
// 			j++;
// 		ptr[i] = malloc(word_len(&s[j], c) + 1);
// 		if (!ptr[i])
// 			return (NULL);
// 		k = 0;
// 		while (s[j] && s[j] != c)
// 		{
// 			ptr[i][k] = s[j];
// 			j++;
// 			k++;
// 		}
// 		ptr[i][k] = '\0';
// 		i++;
// 	}
// 	ptr[i] = NULL;
// 	return (ptr);
// }

// int	main(void)
// {
// 	char	str[];
// 	char	c;
// 	char	**ptr;

// 	str[] = "aaaa++yyyyyyyyyyy++rrr";
// 	c = '+';
// 	ptr = ft_split(str, c);
// 	for (size_t i = 0; i < 4; i++)
// 	{
// 		printf("%s\n", ptr[i]);
// 	}
// 	return (0);
// }
