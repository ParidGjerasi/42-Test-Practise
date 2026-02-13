#include <stdlib.h>
char    *ft_strdup(char *src){

    int i =0;
    char *kak;

    i=0;
    while(src[i]){
        i++;
    }

    kak = malloc(i+1);
    if(!kak)
    return(NULL);

    i=0;
    while(src[i]){
        kak[i] = str[i];
        i++;
    }
    kak[i]= '\0';
    return(kak);
}