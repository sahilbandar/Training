/*	Programe:All Basic Concept.....
	Author:Pritam Krishna Mali.
	Date: 9 Nov 2016
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
//#include "exp_extern.h"

#if 0
int main() 
{

   printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n",INT_MAX);
	
   return 0;
}
#endif

#if 0

int main()
{
	const int cnst=10;
	int x=1;
	char ch='A';

	 printf("Const:%d\n",cnst);
	 printf("int X:%d\n",x);
	 printf("Char ch:%c\n",ch);
	
	return 0;
}

#endif

#if 0
int static_exp()
{
	static int i=0;
	i++;
}
int main()
{	
	printf("1st Time Function call:%d\n",static_exp());
	printf("2nd Time Function call:%d\n",static_exp());
	printf("3rd Time Function call:%d\n",static_exp());

	return 0;
}
#endif

#if 0
int main()
{
	extern int y;
	printf("%d",y);
	return 0;
}
#endif

#if 0
int main()
{
	int num_1,num_2,result=0;
	char ch,opr;

	do
	{
		while(1)
		{
			printf("\nEnter the First Number:");
			scanf("%d",&num_1);
			if(num_1<0)
			{
				printf("\nYour value is less than 0 plz reenter the value");
				continue;
			}
			printf("\nEnter the Second Number:");
			scanf("%d",&num_2);
			if(num_2<0)
			{
				printf("\nYour value is less than 0 plz reenter the value");
				continue;
			}			
			printf("You want to terminate programe.....y/n\n");
			scanf(" %c",&ch);
			if(ch=='y')
				exit(0);
			if(num_1>=0 && num_2>=0)
				break;
		}	
		printf("\nEnter the Operator + - * /::");
		scanf(" %c",&opr);
		switch(opr)
		{
			case '+':
				result=num_1 + num_2;
				break;
			case '-':
				result=num_1 - num_2;
				break;
			case '*':
				result=num_1 * num_2;
				break;
			case '/':
				if(num_2==0)
				{
					printf("Your Division is 0\n");
					break;
				}
				result=num_1 / num_2;
				break;
		}
		printf("\nResult:%d",result);
		printf("\nIf u want continue y/n\n");
		scanf(" %c",&ch);
	}while(ch=='y');
}
#endif

#if 0
int main()
{
		int no=10,i=0;
		
		for(i=31;i>=0;i--)
		{
			printf("%d",(1 & (no >> i)));
		}
		return 0;
}
#endif

#if 0
int main()
{
		int i=0,pos=0,num=0;
		
		printf("Enter The Number:");
		scanf("%d",&num);
		printf("Enter The Position:");
		scanf("%d",&pos);
		num=num | (pos << 1);
		for(i=31;i>=0;i--)
		{
			printf("%d",(1 & (num>> i)));
		}
		return 0;
}
#endif

#if 0
int main()
{
	int a = 10;
	int *ptr = NULL;
//	ptr = &a;
	printf("%p\n",ptr);
//	printf("%p\n",--ptr);
//	printf("%p\n",ptr);
//	printf("%d\n",sizeof((int *)malloc(-1)));
}
#endif

#if 0
int main()
{
	int *ptr;
	if((ptr = malloc(0)) == NULL)
    	printf("unsuccessful: no memory space was allocated.\n");
	else{
    	printf("successful: memoryspace was allocated. \n");
   	 free(ptr);
	}
return 0;
}
#endif

#if 0
	#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
  if (signo == SIGINT)
    printf("received SIGINT\n");
}

int main(void)
{
  if (signal(SIGINT, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGINT\n");
  // A long long wait so that we can easily issue a signal to this process
  while(1) 
    sleep(1);
  return 0;
}
#endif

#if 1

	/* foo5.c */
	#include <stdio.h>
	void f(void); 

	int x = p;
	int y = 15212; 
	int main()
	{
		f();
		printf("x = 0x%d y = 0x%d \n",x, y);
		return 0;
	}	
#endif 
