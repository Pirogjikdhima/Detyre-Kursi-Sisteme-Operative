#include "cd_handling.h"  

void cd(char *path) {
    
    if (strlen(path) == 0) {
        path = getenv("HOME");
        if(path == NULL) 
            fprintf(stderr, "\033[31mNo home directory found\n");
    }
    
    if (chdir(path) != 0) {
        fprintf(stderr, "\033[31m");
        perror("");
    }
    
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    fprintf(stdout,"\033[1;33mYou are in the direcory: %s\n",cwd);
}
