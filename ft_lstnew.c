#include "listes_chainees.h" 

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	
	if(!(new = ft_memalloc(sizeof(*new))))
		return (NULL);
	if(content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = ft_memalloc(content_size);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
