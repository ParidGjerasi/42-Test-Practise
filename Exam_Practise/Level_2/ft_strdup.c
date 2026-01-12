#include <stdlib.h>
char    *ft_strdup(char *src){

    int  i = 0;
    char *kak;

    while(src[i]){
        i++;
    }

    kak = malloc(i+1);

    if(kak ==NULL)
    return(NULL);
    
    i=0;
    while(src[i]){
        kak[i] = src[i];
        i++;
    }
    kak[i] = '\0';
    return(kak);
}