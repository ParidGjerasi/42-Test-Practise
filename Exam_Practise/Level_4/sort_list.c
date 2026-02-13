t_list	*sort_list(t_list* lst, int (*cmp)(int, int)){

	t_list *i;
	t_list *j;
	int seen;

	if(!lst)
	return(NULL);

	i = lst;

	while(i){
		j = i->next;


	while(j){
		if(!cmp(i->data, j->data)){
			seen = i->data;
			i->data = j->data;
			j->data = seen;
		}
		j= j->next;
	}
		i= i->next;
	}
	return(lst);
}