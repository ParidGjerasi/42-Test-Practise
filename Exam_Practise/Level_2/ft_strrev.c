char    *ft_strrev(char *str){

    int i =0;
    int len = 0;
    char shurr;

    while(str[len]){
        len++;
    }

    while(i<len-1){
        shurr = str[i];
        str[i] = str[len-1];
        str[len-1] = shurr;
        i++;
        len--;
    }
    return(str);
}