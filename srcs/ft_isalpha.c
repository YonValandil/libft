int	ft_isalpha(int c)
{
	int r;

	r = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		r = 1;
	return (r);
}
