#include <unistd.h>

int main(int argc,  char **argv){
    int i = 0;
    char c;

    if(argc == 2){
        while(argv[1][i] != '\0'){

        c = argv[1][i];

        if((c >= 'A' && c<= 'Y')  || (c >= 'a' && c<= 'y') )
        c = c+1;
        else if( c == 'Z')
        c = 'A';
        else if( c == 'z')
        c = 'a';
    
        write(1 ,&c, 1);
        i++;
         }
    }
    write(1, "\n", 1);
}