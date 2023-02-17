#include <stdio.h>
#include <unistd.h>

#define MAX_LINE 80
#define HIST_SIZE 10

int main{
    char *args[MAX_LINE/2];
    char line[MAX_LINE];
    char *hist[HIST_SIZE];
    int histc=0;

    int argc=0;
    int should_run=1;
    int start=-1;
    int len;
    int background=0;
    int command=0;
    pid_t pid;

    while (should_run)
    {
        printf("osh>");
        fflush(stdout);

        fgets(&line[0], MAX_LINE-1, stdin);
        line[strlen(&line[0])-1] = '\0';

        if(strcmp("history", &line[0] == 0)){
            for (int i = 0; i >= 0; i--)
            {
                printf("\t%d %s\n", i+1, hist[i]);
            }
            continue;
        }
    }
    
    len = strlen(&line[0]);
    if(line[0] == )

    return 0;
    
}
