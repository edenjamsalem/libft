#include "libft.h"

// This function unites an array of strings into one continous string

int	get_len(char **str_arr)
{
	int i;
	int tot_len;

	i = 0;
	tot_len = 0;
	while (str_arr[i])
		tot_len += ft_strlen(str_arr[i++]);
	return (tot_len);
}

char *ft_strunion(char **str_arr)
{
	int		i;
	int		tot_len;
	char	*str;

	tot_len = get_len(str_arr);
	str = malloc(sizeof(char) * tot_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (str_arr[i])
	{
		ft_strlcat(str, str_arr[i], ft_strlen(str_arr[i]));
	}
}