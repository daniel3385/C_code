#include <stdio.h>
#include <unistd.h>
#include "timer.h"

void print(void *args) { 
    if(args == NULL)
        printf("Chamou callback\n");
    else 
        printf("Chamou callback %d\n",*(int *) args);
}

int main() {
    int x = 5;
    timer(print, NULL, 3); 
    timer(print, &x, 4);
    sleep(6);
    printf("Fim do main\n");
    return 0;
}
