int	ft_isascii(int c)
{
	int r;

	r = 0;
	if (c >= 0 && c <= 127)
		r = 1;
	return (r);	
}
