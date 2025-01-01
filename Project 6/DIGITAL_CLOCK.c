/*
#include<stdio.h>
#include<time.h> 
int main()
{
	time_t s;
	struct tm *current_time;
	s=time(0);
	current_time=localtime(&s);
	printf("%02d : %02d : %02d",current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
	return 0;
}
*/

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void displayTime() {
    time_t s;
    struct tm *current_time;
    
    s = time(NULL);
    current_time = localtime(&s);
    
    printf("Current Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n",
           current_time->tm_mday,
           current_time->tm_mon + 1,
           current_time->tm_year + 1900,
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
}

int main() {
    while (1) {
        system("clear"); // Use "cls" for Windows systems
        displayTime();
        sleep(1); // Pause for 1 second
    }
    return 0;
}
