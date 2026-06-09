#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>


int main() {

    time_t rawtime = 0; // Jan 1 1970 (epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        sleep(1); 
    }
}