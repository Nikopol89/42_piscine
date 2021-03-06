/* SUPPORT FUNCTIONS */

int		ft_check_base(char *str)
{
	int it;
	int src;

	it = 0;
	src = 0;
	if (str[it] == '\0' || str[it + 1] == '\0')
		return (0);
	while (str[it])
	{
		if (str[it] < 32 || str[it] > 126)
			return (0);
		if (str[it] == '+' || str[it] == '-')
			return (0);
		while (str[src])
		{
			if (str[it] == str[src + 1])
				return (0);
			src++;
		}
		it++;
		src = it;
	}
	return (1);
}



/* TEMP DUMP AFTER HERE */

char	*ft_atoi(char *str)
{
	int i;
	int k;
	int sign;

	i = 0;
	k = 0;
	sign = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign--;
		if (str[i] == '+')
			sign++;
		i++;
	}
	if (sign < 0)
	{
		str[k] = '-';
		k++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F')) //WRONG!!! USE BASE INSTEAD
	{
		str[k] = str[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (str[0] == '-')
		return (i - 1);
	else
		return (i);
}

int		ft_base_size(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		ft_check_sign(char *str)
{
	if (str[0] == '-')
		return (-1);
	else
		return (1);
}

int		ft_atoi_base(char *str, char *base)//CUT 6 LINES!
{
	int nbr;
	int size;
	int it;
	int pwr;
	int len;
	int len2;
	int sign;

	ft_atoi(str);
	it = 0;
	size = ft_base_size(base);
	sign = ft_check_sign(str);
	len = ft_strlen(str);
	if (ft_check_base(base))
	{
		if (sign < 0)
			it++;
		while (str[it])
		{
			pwr = 1;
			len2 = len--;
			while (len2-- > 1)
				pwr = pwr * size;
			if (str[it] > '9')
				str[it] -= 7;
			nbr += ((str[it] - '0') * pwr);
			it++;
		}
		return (nbr * sign);
	}
	return (0);
}