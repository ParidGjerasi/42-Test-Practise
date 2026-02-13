#include <unistd.h>

int main(int ac, char**av){

    int i =0;
    int j =0;
    char seen[256] = {0};

    if(ac==3){

        while(av[1][i]){
            if(seen[(unsigned char)av[1][i]]==0)
            j=0;
        while(av[2][j]){

            if(av[1][i]==av[2][j]){
                write(1, &av[1][i], 1);
                seen[(unsigned char)av[1][i]]=1;
                break;
            }
            j++;
        }
        i++;
        }
    }
    write(1, "\n",1);
}