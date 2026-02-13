#include <stdlib.h>
int  merda(int nbr){

	int i=0;

	if(nbr<=0)
		i++;
	while(nbr!=0){
		nbr = nbr/10;
		i++;
	}
	return(i);
}


char	*ft_itoa(int nbr){

	int i;	
	long num;
	int len;
	char *str;

	num = nbr;
	len = merda(nbr);
	str = (char *)malloc((sizeof(char)*(len+1)));
	if(!str)
	return(NULL);
	str[len]='\0';
	i = len-1;
	if(num<0){
		str[0]='-';
		num = -num;
	}
	while(num>9){
		str[i] = num % 10 +'0';
		num = num/10;
		i--;
	}
	str[i] = num +'0';
	return(str);
}