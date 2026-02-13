#include <stdlib.h>
int     *ft_range(int start, int end){

    int i = 0;
    int len = 0;
    int *rak;

    if(start<=end)
    len = end - start +1;
    else
    len = start - end +1;

    rak = malloc(len*sizeof(char));
    if(!rak)
    return(NULL);

    while(i<len){
        rak[i] = start;
        i++;

    if(start<end)
        start++;
    else
        start--;
    }
    return(rak);
}