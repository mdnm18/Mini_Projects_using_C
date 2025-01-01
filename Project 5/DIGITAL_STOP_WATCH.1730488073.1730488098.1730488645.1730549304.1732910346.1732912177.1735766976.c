/* C PROGRAM TO DESIGN A DIGITAL STOP-WATCH */
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int hours, minutes, seconds;
	hours=minutes=seconds=0;
	while(1)
	{
		system("clear");
		printf("%02d : %02d : %02d", hours, minutes, seconds);
		fflush(stdout);
		seconds++;
		if(seconds == 60)
		{
			minutes+=1;
			seconds=0;
		}
		if(hours==24)
		{
			hours=0; 
			minutes=0; 
			seconds=0;
		}
		sleep(1);
	}
	return 0;
}