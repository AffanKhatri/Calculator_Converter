 #include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<MMsystem.h>
#include<unistd.h>
//	*-*-*-* Global Variables *-*-*-*
int n1,n2,cc,c,z;
char q,choice;
int a;
double b;
char ch;
//	*-*-*-* Audio Functions *-*-*-*
void welcome();
void error();
void thanks();
//	*-*-*-* Major Functions *-*-*-*
void calculator();
void converter();
void exp_cal_menu();
void exp_cal();
//	*-*-*-* Calculator Sub-Functions *-*-*-*
void numbers();
int add(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
int cube();
int square();
void factorial();
void fibonacci();
//	*-*-*-* Converter Sub-Functions *-*-*-*
void data();
void liquid();
void weight();
void length();
//	*-*-*-* Additional Functions *-*-*-*
void invalid();
// *-*-*-* Main Function *-*-*-*
int main()
{
	main: do{
		fflush(stdin);
	system("cls");
	system("color b0");
	printf("\t\t\t\t **********************************");
	printf("\n\t\t\t\t *     Calculator + Converter     *");
	printf("\n\t\t\t\t *\t     Made with \x03          *");
	printf("\n\t\t\t\t *\t    by DigiMates          *");
	printf("\n\t\t\t\t ***********Program Menu*********** \n\t\t\t\t * \t\t\t\t  *\n  \t\t\t\t *\tPress 1 for Calculator\t  * \n\t\t\t\t *\tPress 2 for Converter\t  * \n\t\t\t\t * \tPress 3 for Expression \t  *\n\t\t\t\t * \t\t    Calculator\t  * \n\t\t\t\t * \t\t\t\t  *  \n\t\t\t\t ********************************** \n");
//	welcome();
	printf("\t\t\t\t\t    Choice : ");
	scanf("%d",&cc);
	if(cc==1)
	{
		calculator(); //	--- Calling calculator fun --
	}
	else if(cc==2)
	{
		converter(); //	--- Calling Converter fun --
	}
	else if(cc==3)
	{
		exp_cal_menu(); //	--- Calling Expression calculator 
		if(choice=='n' || choice=='N')
		{
			break;
			exit(0);
		}
	}
	else
	{
		invalid(); //	--- Invalid Input Handling --
	
	}
	fflush(stdin); 
	menu: printf("\n \n \t\t\t\tDo you want to go to Main Menu (Y/N) : "); //	--- Continuation choice ---
	scanf(" %c",&q);
	if(q =='y' || q =='Y')
	{
		goto main;
	}
	else if(q =='n' || q =='n')
	{
		thanks();
		break;
		exit(0);
	}
	else
	{
		error();
		system("cls");
		printf("\n\t\t\t\t\tChoose Between (Y/N) !");
		goto menu; //	--- Exceptional Case ---
	}
	}while(q =='y' || q =='Y');
	  
	return 0;
	
}
//	---NUMBER_INPUT---
void numbers()
{
	printf("\n\t\t\t\t    Enter First Number : ");
	if(!scanf("%d",&n1))
	{
		invalid();
		z=1;
	}
	printf("\t\t\t\t    Enter Second Number : ");
	if(!scanf("%d",&n2))
	{
		invalid();
		z=1;
	}
	
	

}

//	---Add Fun--- (with parameter and return)
int add(int n1,int n2) 
{
	return n1+n2;
}

//	---Sub Fun--- (with parameter and return)
int sub(int n1,int n2)
{
	return n1-n2;
}

//	---Mul Fun--- (with parameter and return)
int mul(int n1,int n2)
{
	return n1*n2;
}

//	---Square Fun--- (with return , No parameter)
int square()
{
	printf("\n\t\t\t\tEnter a number to find Square : ");
	scanf("%d",&n1);
	
	return n1*n1;
}

//	---Cube Fun--- (with return , No parameter)
int cube()
{
	printf("\n\t\t\t\tEnter a number to find Cube : ");
	scanf("%d",&n1);
	
	return n1*n1*n1;
}

//	---Fibonacci Fun--- (No return , No parameter)
void fibonacci()
{
	int i,n;
	int t1=0,t2=1;
	int nt=t1+t2;
	printf("\n\t\t\t\t   Enter number of terms : ");
	scanf("%d",&n);
	
	printf("\t\t\t\t\tFibonacci Series : %d %d",t1,t2);
	
	for(i=2;i<n;i++)
	{
		printf(" %d",nt);
		t1=t2;
		t2=nt;
		nt=t1+t2;
	}
}

//	---Factorial Fun--- (No return , No parameter)
void factorial()
{
	int i,n;
	unsigned long long fact=1;
	
	printf("\n\t\t\t\tEnter a number to find factorial : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact *= i;	
	}
	printf("\t\t\t\t\tFactorial of %d = %u",n,fact);
}


//	*-*-*-*- CALCULATOR -*-*-*-*
void calculator()
{
	system("cls");
	printf("\n\n\t\t\t\t **********************************\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t *\t     CALCULATOR\t\t  *\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t **********************************\n\n");
	//	--- Calculator Menu ---
	
	printf("\n\t\t\t\t   What do you want to Perform ? ");
	printf("\n\t\t\t\t\t    1. Addition \n\t\t\t\t\t    2. Subtraction \n\t\t\t\t\t    3. Multiplication \n\t\t\t\t\t    4. Division \n\t\t\t\t\t    5. Square \n\t\t\t\t\t    6. Cube \n\t\t\t\t\t    7. Fibonacci Series \n\t\t\t\t\t    8. Factorial \n");
	//	--- Menu Choice Input ---
	printf("\n\t\t\t\t\t    Choice : ");
	scanf("%d",&c);
	//	--- Comparison of Menu Choice ---	
	if(c==1)
	{
		printf("\n\t\t\t\t    You Have Selected Addition\n");
		numbers();
		if(z!=1)
		printf("\n\t\t\t\t  The Addition of %d + %d = %d",n1,n2,add(n1,n2)); //	--- Add Fun ---
		
		
	}
	
	else if(c==2)
	{
		printf("\n\t\t\t\t    You Have Selected Subtraction\n");
		numbers();
		if(z!=1)
		printf("\n\t\t\t\t  The Subtraction of %d - %d = %d",n1,n2,sub(n1,n2)); //	--- Sub Fun ---
	}
	
	else if(c==3)
	{
		printf("\n\t\t\t\t    You Have Selected Multiplication\n");
		numbers();
		if(z!=1)
		printf("\n\t\t\t\t  The Multiplication of %d * %d = %d",n1,n2,mul(n1,n2)); //	--- Mul Fun ---
	}
	
	else if(c==4)
	{
		printf("\n\t\t\t\t    You Have Selected Division\n");
		numbers();
		if(z!=1)
		{
			printf("\n\t\t\t\t     The Division of %d / %d",n1,n2); //	--- Direct Implementation of Divison operation  ---
			printf("\n\t\t\t\t         Quotitent : %d",n1/n2); //	--- Quotient ---
			printf("\n\t\t\t\t         Remainder : %d",n1%n2);	//	--- Remainder ---
		}
	}
	
	else if(c==5)
	{
		printf("\n\t\t\t\t    You Have Selected Square\n");
		printf("\t\t\t\t\tThe Square of %d = %d",n1,square()); //	--- Square Fun ---
	}
	
	else if(c==6)
	{
		printf("\n\t\t\t\t    You Have Selected Cube\n");
		printf("\t\t\t\t\tThe Cube of %d = %d",n1,cube());	//	--- Cube Fun ---
	}
	
	else if(c==7)
	{
		printf("\n\t\t\t\t    You Have Selected Fibonacci\n");
		fibonacci();	//	--- Fibonacci Fun ---
	}
	
	else if(c==8)
	{
		printf("\n\t\t\t\t    You Have Selected Factorial\n");
		factorial();	//	--- Factorial Fun ---
	}
	
	else
	{
		printf("\t\t\t\t\tInvalid Operation!");	//	--- Error Handling for Invalid Choice Input ---
	}
}


//	*-*-*-*- CONVERTER -*-*-*-*
void converter()
{
	choice='y'; // --- Initialization for starting the block ---
	int i;
	system("cls");
	printf("\n\n\t\t\t\t **********************************\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t *\t     CONVERTER\t\t  *\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t **********************************\n\n");

	start:  if(choice=='y' || choice=='Y') // --- Comparing Choice Input ---
  	{do
	{
		
		printf("\n\t\t\t\t   What do you want to Convert ? ");
		printf("\n\t\t\t\t\t    1. Data \n\t\t\t\t\t    2. Length \n\t\t\t\t\t    3. Liquid \n\t\t\t\t\t    4. Weight \n\t\t\t\t\t");
		//	--- Menu Choice Input ---
		printf("\n\t\t\t\t\t    Choice : ");
		scanf("%d",&i);
	 if(i==1)
	 {
	 	system("cls");
	 	printf("\n\n\n\t\t\t\t     You Have Selected Data Conversion\n");
	 	data();	
	 }
	 else if(i==2)
	 {
	 	system("cls");
	 	printf("\n\n\n\t\t\t\t    You Have Selected Length Conversion\n");
	 	length();
	 }
	 else if(i==3)
	 {
	 	system("cls");
	 	printf("\n\n\n\t\t\t\t    You Have Selected Liquid Conversion\n");	
	 	liquid();
	 }
	 else if(i==4)
	 {
	 	system("cls");
	 	printf("\n\n\n\t\t\t\t     You Have Selected Weight Conversion\n");
		weight();
	 }
	 else
	{
		invalid();
	}
	fflush(stdin);
  				
  	printf("\n\n\t\t\t\tDo you want to Retry ? (Y/N) : "); // --- Choice Prompt for Continuation ---
  	scanf("%c",&choice);
  	if(choice=='y' || choice=='Y') // --- Comparing Chooice Input ---
 	{
 		system("cls");
  		goto start;
	}
	else
	{
		thanks();
		exit(0);
	}
	
	}while(1);
	}
}

//	*-*-*-*- EXPRESSION	CALCULATOR -*-*-*-*
void exp_cal()
{
	int a,b;
	int c;
	char op;
	int e=0;
	system("cls");
	printf("\n\n\t\t\t\t **********************************\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t *\tEXPRESSION CALCULATOR\t  *\n\t\t\t\t *\t\t\t\t  *\n\t\t\t\t **********************************\n\n");
	printf("\n\n\t\t\t\t  Enter the Expression : \n");
	do
	{
		if(e==0)
		{
			printf("\n\t\t\t\t\t\t");
			
				if(!scanf("%d",&a))
				{
					invalid();
					break;
				}
				
   			e++;
		}
	
		else
		{
			fflush(stdin);
			printf("           \t\t\t\t");
			scanf("%c",&op);
			
			if(op=='+' || op=='-' || op=='*'|| op=='/'|| op=='%')
			{
				printf("  \t\t\t\t\t\t");
				if(!scanf("%d",&b))
				{
					invalid();
					break; 
				}
   				
   	       		else
				{
					printf("\t\t\t\t\t---------------\n\t\t\t\t\t");
					if(op=='+')
					{
						a=a+b;
						printf("        %d\n",a);
					}
					else if(op=='-')
					{
						a=a-b;
						printf("        %d\n",a);
					}
          	  	 	else if(op=='*')
					{
						a=a*b;
						printf("        %d\n",a);
					}
					else if(op=='/')
					{
						a=a/b;
						printf("        %d\n",a);
					}
					else if(op=='%')
					{
						a=a%b;
						printf("        %d\n",a);
					}
				}
			}
						
			else
			{
				invalid();
				break;
			}
		}
	}while(1);
}


//	*-*-*-*- EXPRESSION	CALCULATOR MENU -*-*-*-*  
void exp_cal_menu()
{   
	choice='y'; // --- Initialization for starting the block ---
	start:  if(choice=='y' || choice=='Y') // --- Comparing Chooice Input ---
  			{
  				exp_cal(); // --- Calling Expression Calculator ---
  				fflush(stdin);
  				
  				printf("\t\t\t\tDo you want to Retry ? (Y/N) : "); // --- Choice Prompt for Continuation ---
  				scanf("%c",&choice);
  					if(choice=='y' || choice=='Y') // --- Comparing Chooice Input ---
  					{
  						goto start;
					}
					else
					{
						thanks();
						exit(0);
					}
					
  				system("cls");
  			}
  	
  			else if(choice=='n' || choice=='N') // --- Comparing Chooice Input ---
	  		{
	  			thanks();
	  			exit(0);
	  		}
			else // --- Exceptional error / glitch handling ---
			{
				thanks();
				exit(0);
			}
}

//
void invalid()
{
	error(); // calling error function
	system("cls");
	printf("\t\t\t\t\t*************************\n\t\t\t\t\t*\t\t\t*\n\t\t\t\t\t*     INVALID INPUT!\t*\n\t\t\t\t\t*\t\t\t*\n\t\t\t\t\t*************************\n\n");
	printf("\t\t\t\t\t    Program Terminated\n\n");
}
  
void welcome()
{
	if(z==0)
	{
		
	PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);
	z++;
	}
}

void thanks()
{
	PlaySound(TEXT("thankyou.wav"),NULL,SND_SYNC);	
}
void error()
{
	PlaySound(TEXT("error.wav"),NULL,SND_SYNC);	
}

void data()
{

	printf("\n\n\t\t\t\t    Select an unit you want to convert : \n");
	printf("\n\t\t\t\t\t    1. Byte (b) \n\t\t\t\t\t    2. KiloByte (kb) \n\t\t\t\t\t    3. MegaBytes (mb) \n\t\t\t\t\t    4. GigaBytes (gb) \n\t\t\t\t\t    5. TeraBytes (tb) \n\t\t\t\t\t");
	printf("\n\t\t\t\t\t      Choice : ");
	scanf("%d",&a);
	printf("\n\n");
	if(a==1)
	{
		printf("\t\t\t\t\tEnter the byte : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.lf byte = %0.2lf kb\n",b,b/1000);
			printf("\t\t\t\t\t%0.lf byte = %0.2lf Mb\n",b,b/1e6);
			printf("\t\t\t\t\t%0.lf byte = %0.2lf Gb\n",b,b/1e9);
			printf("\t\t\t\t\t%0.lf byte = %0.2lf Tb\n",b,b/1e12);
		}
		
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==2)
	{
		printf("\t\t\t\t\tEnter the KiloBytes (kb) : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf Kb = %0.0lf byte\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf Kb = %0.2lf Mb\n",b,b/1000);
			printf("\t\t\t\t\t%0.2lf Kb = %0.3lf Gb\n",b,b/1e6);
			printf("\t\t\t\t\t%0.2lf Kb = %0.3lf Tb\n",b,b/1e9);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if (a==3)
	{
		printf("\t\t\t\t\tEnter the MegaBytes (Mb) : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf Mb = %0.0lf byte\n",b,b*1e6);
			printf("\t\t\t\t\t%0.2lf Mb = %0.2lf Kb\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf Mb = %0.3lf Gb\n",b,b/1000);
			printf("\t\t\t\t\t%0.2lf Mb = %0.3lf Tb\n",b,b/1e6);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if (a==4)
	{
		printf("\t\t\t\t\tEnter the GigaBytes (Gb) : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");	
			printf("\t\t\t\t\t%0.2lf Gb = %0.0lf byte\n",b,b*1e+9);
			printf("\t\t\t\t\t%0.2lf Gb = %0.2lf Kb\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf Gb = %0.2lf Mb\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf Gb = %0.3lf Tb\n",b,b/1000);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if (a==5)
	{
		printf("\t\t\t\t\tEnter the TeraByte (Tb) : ");
		
		if(scanf("%lf",&b))
		{
			printf("\n\n");	
			printf("\t\t\t\t\t%0.2lf Tb = %0.0lf byte\n",b,b*1e+12);
			printf("\t\t\t\t\t%0.2lf Tb = %0.2lf Kb\n",b,b*1e+9);
			printf("\t\t\t\t\t%0.2lf Tb = %0.2lf Mb\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf Tb = %0.3lf Gb\n",b,b*1000);
		}
		else
		{
			invalid();
			exit(0);
		}	
	}
}

void length()
{
	printf("\n\n\t\t\t\t    Select an unit you want to convert : \n");
	printf("\n\t\t\t\t\t    1. MiliMeter (mm) \n\t\t\t\t\t    2. Centimeter (cm) \n\t\t\t\t\t    3. Inch (i) \n\t\t\t\t\t    4. Feet (ft) \n\t\t\t\t\t    5. Meter (m) \n\t\t\t\t\t");
	printf("\n\t\t\t\t\t      Choice : ");
	scanf("%d",&a);
	printf("\n\n");
	if(a==1)
	{
		
		printf("\t\t\t\t\tEnter the Milimeter : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf mm = %0.2lf cm\n",b,b/10);
			printf("\t\t\t\t\t%0.2lf mm = %0.2lf i\n",b,b/25.4);
			printf("\t\t\t\t\t%0.2lf mm = %0.2lf ft\n",b,b/305);
			printf("\t\t\t\t\t%0.2lf mm = %0.2lf m\n",b,b/1000);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==2)
	{
		printf("\t\t\t\t\tEnter the Centiimeter : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf cm = %0.2lf mm\n",b,b*10);
			printf("\t\t\t\t\t%0.2lf cm = %0.2lf i\n",b,b/2.54);
			printf("\t\t\t\t\t%0.2lf cm = %0.2lf ft\n",b,b/30.48);
			printf("\t\t\t\t\t%0.2lf cm = %0.2lf m\n",b,b/100);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==3)
	{
		printf("\t\t\t\t\tEnter the Inch : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf i = %0.2lf mm\n",b,b*25.4);
			printf("\t\t\t\t\t%0.2lf i = %0.2lf cm\n",b,b*2.54);
			printf("\t\t\t\t\t%0.2lf i = %0.2lf ft\n",b,b/12);
			printf("\t\t\t\t\t%0.2lf i = %0.2lf m\n",b,b/39.37);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==4)
	{
		printf("\t\t\t\t\tEnter the Feet : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf ft = %0.2lf mm\n",b,b*305);
			printf("\t\t\t\t\t%0.2lf ft = %0.2lf cm\n",b,b*30.48);
			printf("\t\t\t\t\t%0.2lf ft = %0.2lf i\n",b,b*12);
			printf("\t\t\t\t\t%0.2lf ft = %0.2lf m\n",b,b/3.281);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==5)
	{
		printf("\t\t\t\t\tEnter the Meter : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf m = %0.2lf mm\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf m = %0.2lf cm\n",b,b*100);
			printf("\t\t\t\t\t%0.2lf m = %0.2lf i\n",b,b*39.37);
			printf("\t\t\t\t\t%0.2lf m = %0.2lf ft\n",b,b*3.281);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else
	{
		invalid();
	}

}

void liquid()
{
	printf("\n\n\t\t\t\t    Select an unit you want to convert : \n");
	printf("\n\t\t\t\t\t    1. Mililitre (ml) \n\t\t\t\t\t    2. Centilitre (cl) \n\t\t\t\t\t    3. Litre (l) \n\t\t\t\t\t    4. Kilolitre (kl) \n\t\t\t\t\t    5. Gallon (gal) \n\t\t\t\t\t");
	printf("\n\t\t\t\t\t      Choice : ");
	scanf("%d",&a);
	printf("\n\n");
	if(a==1)
	{
		printf("\t\t\t\t\tEnter the Mililitre : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf ml = %0.2lf cl\n",b,b/10);
			printf("\t\t\t\t\t%0.2lf ml = %0.2lf l\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf ml = %0.2lf kl\n",b,b/1e+6);
			printf("\t\t\t\t\t%0.2lf ml = %0.2lf gal\n",b,b/3785);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==2)
	{
		printf("\t\t\t\t\tEnter the Centilitre : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf cl = %0.2lf ml\n",b,b*10);
			printf("\t\t\t\t\t%0.2lf cl = %0.2lf l\n",b,b/100);
			printf("\t\t\t\t\t%0.2lf cl = %0.2lf kl\n",b,b/100000);
			printf("\t\t\t\t\t%0.2lf cl = %0.2lf gal\n",b,b/379);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==3)
	{
		printf("\t\t\t\t\tEnter the Litre : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf l = %0.2lf ml\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf l = %0.2lf cl\n",b,b*100);
			printf("\t\t\t\t\t%0.2lf l = %0.2lf kl\n",b,b/1000);
			printf("\t\t\t\t\t%0.2lf l = %0.2lf gal\n",b,b/3.785);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==4)
	{
		printf("\t\t\t\t\tEnter the Kiloitre : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf kl = %0.2lf ml\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf kl = %0.2lf cl\n",b,b*100000);
			printf("\t\t\t\t\t%0.2lf kl = %0.2lf l\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf kl = %0.2lf gal\n",b,b*264);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==4)
	{
		printf("\t\t\t\t\tEnter the Gallon : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf gal = %0.2lf ml\n",b,b*3785);
			printf("\t\t\t\t\t%0.2lf gal = %0.2lf cl\n",b,b*379);
			printf("\t\t\t\t\t%0.2lf gal = %0.2lf l\n",b,b*3.785);
			printf("\t\t\t\t\t%0.2lf gal = %0.2lf kl\n",b,b/264);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else
	{
		invalid();
	}
}

void weight()
{
	printf("\n\n\t\t\t\t    Select an unit you want to convert : \n");
	printf("\n\t\t\t\t\t    1. Miligram (mg) \n\t\t\t\t\t    2. Gram (g) \n\t\t\t\t\t    3. Kilogram (kg) \n\t\t\t\t\t    4. Pound (lb) \n\t\t\t\t\t    5. Ton (t) \n\t\t\t\t\t");
	printf("\n\t\t\t\t\t      Choice : ");
	scanf("%d",&a);
	printf("\n\n");
	if(a==1)
	{
		printf("\t\t\t\t\tEnter the Miligram : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf mg = %0.2lf g\n",b,b/1000);
			printf("\t\t\t\t\t%0.2lf mg = %0.2lf kg\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf mg = %0.2lf lb\n",b,b/453592);
			printf("\t\t\t\t\t%0.2lf mg = %0.2lf ton\n",b,b/1e+9);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	else if(a==2)
	{
		printf("\t\t\t\t\tEnter the Gram : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
		printf("\t\t\t\t\t%0.2lf g = %0.2lf mg\n",b,b*1000);
		printf("\t\t\t\t\t%0.2lf g = %0.2lf kg\n",b,b/1000);
		printf("\t\t\t\t\t%0.2lf g = %0.2lf lb\n",b,b/454);
		printf("\t\t\t\t\t%0.2lf g = %0.2lf ton\n",b,b/1e+6);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	
	else if(a==3)
	{
		printf("\t\t\t\t\tEnter the Kilogram : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf kg = %0.2lf mg\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf kg = %0.2lf g\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf kg = %0.2lf lb\n",b,b*2.205);
			printf("\t\t\t\t\t%0.2lf kg = %0.2lf ton\n",b,b/1000);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	
	else if(a==4)
	{
		printf("\t\t\t\t\tEnter the Pound : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf lb = %0.2lf mg\n",b,b*453592);
			printf("\t\t\t\t\t%0.2lf lb = %0.2lf g\n",b,b*454);
			printf("\t\t\t\t\t%0.2lf lb = %0.2lf kg\n",b,b/2.205);
			printf("\t\t\t\t\t%0.2lf lb = %0.2lf ton\n",b,b/2205);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	
	else if(a==5)
	{
		printf("\t\t\t\t\tEnter the Tonne : ");
		if(scanf("%lf",&b))
		{
			printf("\n\n");
			printf("\t\t\t\t\t%0.2lf ton = %0.2lf mg\n",b,b*1e+9);
			printf("\t\t\t\t\t%0.2lf ton = %0.2lf g\n",b,b*1e+6);
			printf("\t\t\t\t\t%0.2lf ton = %0.2lf kg\n",b,b*1000);
			printf("\t\t\t\t\t%0.2lf ton = %0.2lf lb\n",b,b*2205);
		}
		else
		{
			invalid();
			exit(0);
		}
	}
	
	else
	{
		invalid();
	}
	
}
