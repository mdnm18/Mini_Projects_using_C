#include<stdio.h>
#define TRUE 1
#define FALSE 0
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={
					" ", 
					"\n\n\nJANUARY",
					"\n\n\nFABRUARY",
					"\n\n\nMARCH",
					"\n\n\nAPRIL",
					"\n\n\nMAY",
					"\n\n\nJUNE",
					"\n\n\nJULY",
					"\n\n\nAUGUST",
					"\n\n\nSEPTEMBER",
					"\n\n\nOCTOBER",
					"\n\n\nNOVEMBER",
					"\n\n\nDECEMBER"
			   };
int inputyear(void)
{
	int year;
	printf("PLEASE ENTER A YEAR (e.g.,2006) : ");
	scanf("%d",&year);
	return year;
}
int determine_leapyear(int year)
{
	if(year%4==FALSE && year%100!= FALSE || year%400== FALSE)
	{
		days_in_month[2]=29;
		return TRUE;
	}
	else
	{
		days_in_month[2]=28;
		return FALSE;
	}
}
int determine_day_code(int year)
{
	int daycode;
	int d1, d2, d3;
	//Zeller's Congruence formula
	d1=(year-1.)/4.0;
	d2=(year-1.)/100.0;
	d3=(year-1.)/400.0;
	daycode=(year+d1-d2+d3)%7;
	return daycode;
}
void calender(int year, int daycode)
{
	int month, day;
	for(month=1; month<=12; month++)
	{
		printf("%s",months[month]);
		printf("\n\n\nSUN MON TUE WED THU FRI SAT\n");
		for(day=1; day<=1+daycode*5; day++)
		{
			printf(" ");
		}
		for(day=1; day<=days_in_month[month]; day++)
		{
			printf("%2d",day);
			if((day+daycode)%7 >0)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
		daycode=(daycode+days_in_month[month])%7;
	}
}
int main(void)
{
	int year, daycode, leapyear;
	year=inputyear();
	daycode=determine_day_code(year);
	determine_leapyear(year);
	calender(year, daycode);
	printf("\n");
}