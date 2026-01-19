#include <unistd.h>

char    *ft_strdup(char *src){

    int i = 0;
    char *kak;

    while(src[i]){
        i++;
    }

    kak = malloc(i+1);
    if(!kak)
    return(NULL);

    while(src[i]){
        kak[i] = src[i];
        i++;
    }
    kak[i] = '\0';
    return(kak);
}