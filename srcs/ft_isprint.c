int	ft_isprint(int c)
{
	int r;

	r = 0;
	if (c >= 32 && c <= 126)
		r = 1;
	return (r);
}
