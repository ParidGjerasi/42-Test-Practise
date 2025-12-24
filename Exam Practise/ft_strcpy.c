char    *ft_strcpy(char *s1, char *s2){
    char *dest;

    dest = s1;
    while(*s2)
    *s1++ = *s2++;
    *s1 = '\0';
    return (dest);
}