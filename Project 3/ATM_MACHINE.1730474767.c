#include<stdio.h>
int main()
{
	char card;
	int n, p, a, b, diff;
	printf("<------: WELCOME TO THE ATM :------>\n\n");
	printf("PLEASE INSERT YOUR CARD (k,s,l,i,n) : \n\n");
	scanf("%c",&card);
	system("cls");
	// CARD-1 : k ;
	if(card=='k')
	{
		printf("HELLO! NAYAJ\n YOUR ARE USING SBI DEBIT CARD\n\n");
		printf(">PRESS 1 TO WITHDRAW THE MONEY FROM YOUR ACCOUNT\n\n");
		printf(">PRESS 2 TO CHECK YOUR BALANCE\n\n");
		b=50000;
		scanf("%d",&n);
		system("cls");
		if(n==1)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==1234)
			{
				printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
				scanf("%d",&a);
				if(a>b)
				{
					printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
				}
				else
				{
					printf("PLEASE COLLECT YOUR MONEY");
					diff=b-a;
					printf("NOW, YOUR BANK BALANCE IS %d",diff);
				}
			}
			else
			{
				printf("INCORRECT PIN\n\n");
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==1234)
				{
					printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
					scanf("%d",&a);
					if(a>b)
					{
						printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
					}
					else
					{
						printf("PLEASE COLLECT YOUR MONEY");
						diff=b-a;
						printf("NOW, YOUR BANK BALANCE IS %d",diff);
					}
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
		if(n==2)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==1234)
			{
				printf("YOUR BANK BALANCE IS %d",b);
			}
			else
			{
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==1234)
				{
					printf("YOUR BANK BALANCE IS %d",b);
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
	}
	// CARD-2 : s ;
	else if(card=='s')
	{
		printf("HELLO! NAYAJ\n YOUR ARE USING HDFC BANK DEBIT CARD\n\n");
		printf(">PRESS 1 TO WITHDRAW THE MONEY FROM YOUR ACCOUNT\n\n");
		printf(">PRESS 2 TO CHECK YOUR BALANCE\n\n");
		b=100000;
		scanf("%d",&n);
		system("cls");
		if(n==1)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==5678)
			{
				printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
				scanf("%d",&a);
				if(a>b)
				{
					printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
				}
				else
				{
					printf("PLEASE COLLECT YOUR MONEY");
					diff=b-a;
					printf("NOW, YOUR BANK BALANCE IS %d",diff);
				}
			}
			else
			{
				printf("INCORRECT PIN\n\n");
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==5678)
				{
					printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
					scanf("%d",&a);
					if(a>b)
					{
						printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
					}
					else
					{
						printf("PLEASE COLLECT YOUR MONEY");
						diff=b-a;
						printf("NOW, YOUR BANK BALANCE IS %d",diff);
					}
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
		if(n==2)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==5678)
			{
				printf("YOUR BANK BALANCE IS %d",b);
			}
			else
			{
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==5678)
				{
					printf("YOUR BANK BALANCE IS %d",b);
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
	}
	// CARD-3 : l ;
	if(card=='l')
	{
		printf("HELLO! NAYAJ\n YOUR ARE USING ICICI BANK DEBIT CARD\n\n");
		printf(">PRESS 1 TO WITHDRAW THE MONEY FROM YOUR ACCOUNT\n\n");
		printf(">PRESS 2 TO CHECK YOUR BALANCE\n\n");
		b=600000;
		scanf("%d",&n);
		system("cls");
		if(n==1)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==9123)
			{
				printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
				scanf("%d",&a);
				if(a>b)
				{
					printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
				}
				else
				{
					printf("PLEASE COLLECT YOUR MONEY");
					diff=b-a;
					printf("NOW, YOUR BANK BALANCE IS %d",diff);
				}
			}
			else
			{
				printf("INCORRECT PIN\n\n");
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==9123)
				{
					printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
					scanf("%d",&a);
					if(a>b)
					{
						printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
					}
					else
					{
						printf("PLEASE COLLECT YOUR MONEY");
						diff=b-a;
						printf("NOW, YOUR BANK BALANCE IS %d",diff);
					}
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
		if(n==2)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==9123)
			{
				printf("YOUR BANK BALANCE IS %d",b);
			}
			else
			{
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==9123)
				{
					printf("YOUR BANK BALANCE IS %d",b);
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
	}
	// CARD-4 : i ;
	if(card=='i')
	{
		printf("HELLO! NAYAJ\n YOUR ARE USING AXIS BANK DEBIT CARD\n\n");
		printf(">PRESS 1 TO WITHDRAW THE MONEY FROM YOUR ACCOUNT\n\n");
		printf(">PRESS 2 TO CHECK YOUR BALANCE\n\n");
		b=900000;
		scanf("%d",&n);
		system("cls");
		if(n==1)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==4567)
			{
				printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
				scanf("%d",&a);
				if(a>b)
				{
					printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
				}
				else
				{
					printf("PLEASE COLLECT YOUR MONEY");
					diff=b-a;
					printf("NOW, YOUR BANK BALANCE IS %d",diff);
				}
			}
			else
			{
				printf("INCORRECT PIN\n\n");
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==4567)
				{
					printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
					scanf("%d",&a);
					if(a>b)
					{
						printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
					}
					else
					{
						printf("PLEASE COLLECT YOUR MONEY");
						diff=b-a;
						printf("NOW, YOUR BANK BALANCE IS %d",diff);
					}
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
		if(n==2)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==4567)
			{
				printf("YOUR BANK BALANCE IS %d",b);
			}
			else
			{
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==4567)
				{
					printf("YOUR BANK BALANCE IS %d",b);
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
	}
	// CARD-5 : n ;
	if(card=='n')
	{
		printf("HELLO! NAYAJ\n YOUR ARE USING PNB DEBIT CARD\n\n");
		printf(">PRESS 1 TO WITHDRAW THE MONEY FROM YOUR ACCOUNT\n\n");
		printf(">PRESS 2 TO CHECK YOUR BALANCE\n\n");
		b=30000;
		scanf("%d",&n);
		system("cls");
		if(n==1)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==8912)
			{
				printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
				scanf("%d",&a);
				if(a>b)
				{
					printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
				}
				else
				{
					printf("PLEASE COLLECT YOUR MONEY");
					diff=b-a;
					printf("NOW, YOUR BANK BALANCE IS %d",diff);
				}
			}
			else
			{
				printf("INCORRECT PIN\n\n");
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==8912)
				{
					printf("ENTER THE AMOUNT TO BE WITHDRAW :\n");
					scanf("%d",&a);
					if(a>b)
					{
						printf("INSUFFICIENT MONEY IN YOUR ACCOUNT !");
					}
					else
					{
						printf("PLEASE COLLECT YOUR MONEY");
						diff=b-a;
						printf("NOW, YOUR BANK BALANCE IS %d",diff);
					}
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
		if(n==2)
		{
			printf("PLEASE ENTER YOUR 4-DIGIT PIN :\n");
			scanf("%d",&p);
			if(p==8912)
			{
				printf("YOUR BANK BALANCE IS %d",b);
			}
			else
			{
				printf("PLEASE TRY AGAIN\n\n");
				scanf("%d",&p);
				if(p==8912)
				{
					printf("YOUR BANK BALANCE IS %d",b);
				}
				else
				{
					printf("YOUR REQUEST HAS BEEN BLOCKED\n");
					printf("SO, PLEASE TRY AGAIN AFTER AT LEAST 1 HOURS.");
				}
			}
		}
	}
	return 0;	
}