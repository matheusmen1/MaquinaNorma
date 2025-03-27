#include <stdio.h>
#include <conio2.h>
#include <string.h>
#include <ctype.h>
struct TpReg{
	
	int num;
	char s;
};
typedef struct TpReg TpReg;

void inserirRegistro(TpReg *reg, char letra)
{
	
	int num;
	printf ("Digite um valor para %c:\n", letra);
	scanf ("%d", &num);
	(*reg).num = num;

	if ((*reg).num > 0)
		(*reg).s = '0';
	else
		(*reg).s = '1';
	
}
void Programa1(TpReg *RegA, TpReg *RegB)
{
	clrscr();
	printf ("A1 A2\tB1 B2\n");
	if ((*RegB).s == '0') // incrementa 1 em RegA e decrementa 1 em B
	{
		
		while((*RegB).num > 0) // enqt decrementar 
		{
			printf("%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num);
			(*RegA).num++;
			(*RegB).num--;
			if((*RegB).num == 0) 
				(*RegB).s = '0';
			if((*RegA).num >= 0) // deixou de ser negativo
				(*RegA).s = '0';
		}
		printf("%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num);
	}
	else
	{
		while((*RegB).num < 0) // enqt decrementar 
		{
			printf("%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num);
			(*RegA).num--;
			(*RegB).num++; // sempre vai negativo
			if((*RegB).num == 0) // deixou de negativo
				(*RegB).s = '0';
			if((*RegA).num < 0) // deixou de ser positivo
				(*RegA).s = '1';
		}
		printf("%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num);
	}
	getch();
}
void Programa2(TpReg *RegA, TpReg *RegB, TpReg *RegC)
{
	clrscr();
	printf ("A1 A2\tB1 B2\tC1 C2\n");
	
	if ((*RegB).s == '0') // incrementa 1 em RegA e decrementa 1 em B
	{
		while((*RegB).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegC).num++; // sempre vai ser positivo
			(*RegB).num--; // pode virar negativo
			if((*RegB).num == 0)
				(*RegB).s = '0';
			if((*RegC).num >= 0)
				(*RegC).s = '0';
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
		printf("\n");
		while((*RegC).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegA).num++; // pode virar positivo
			(*RegB).num++; // pode virar positivo
			(*RegC).num--; // pode virar negativo
			
			if((*RegB).num >= 0) // deixou de ser negativo
				(*RegB).s = '0';
			if((*RegA).num >= 0) // deixou de ser negativo
				(*RegA).s = '0';
			if((*RegC).num == 0)
				(*RegC).s = '0';
			
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
	}
	else
	{
		while((*RegB).num < 0) 
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegC).num--; // sempre vai ser negativo
			(*RegB).num++; // sempre vai ser negativo
			if((*RegC).num < 0)
				(*RegC).s = '1';
			if((*RegB).num == 0)
				(*RegB).s = '0';
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
		printf("\n");
		while((*RegC).num < 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegA).num--; //pode virar negativo
			(*RegB).num--; //sempre vai ser negativo
			(*RegC).num++; //sempre vai ser negativo
			
			if((*RegB).num < 0)
				(*RegB).s = '1';
			if((*RegC).num >= 0)
				(*RegC).s = '0';
			if((*RegA).num < 0) // virou negativo
				(*RegA).s = '1';
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
	}
	getch();
	
}
void Programa3(TpReg *RegA, TpReg *RegB, TpReg *RegC)
{
	
	clrscr();
	printf ("A1 A2\tB1 B2\tC1 C2\n");
	if((*RegA).s == '0') // subtrair até ser zero
	{
		
		while((*RegA).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegA).num--;
		}
		
	}
	else // somar até ser zero
	{
		
		while((*RegA).num < 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegA).num++;
			if((*RegA).num >= 0) // deixou de ser negativo
				(*RegA).s = '0';
		}
		
	}
	printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
	printf("\n");
	if ((*RegB).s == '0')  
	{
		
		while((*RegB).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegB).num--;
			(*RegC).num++;
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
		printf("\n");
		while((*RegC).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegC).num--;
			(*RegB).num++;
			(*RegA).num++;
			if((*RegA).num >= 0)
				(*RegA).s = '0';
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
	}
	else
	{
		while((*RegB).num < 0) // b negativo
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegB).num++;
			if((*RegB).num >= 0)
				(*RegB).s = '0';
			
			(*RegC).num--;
			if((*RegC).num < 0) // deixou de ser positivo
				(*RegC).s = '1'; 
				
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
		printf("\n");
		while((*RegC).num < 0)
		{
			printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
			(*RegC).num++;
			if((*RegC).num >= 0)
				(*RegC).s = '0';
			
			(*RegB).num--;
			if((*RegB).num < 0)
				(*RegB).s = '1';
				
			(*RegA).num--;
			if((*RegA).num < 0)
				(*RegA).s = '1';
			
		}
		printf("%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num);
	}
	getch();
	
	
}
void Programa4(TpReg *RegA, TpReg *RegB, TpReg *RegC, TpReg *RegD)
{
	clrscr();
	printf ("A1 A2\tB1 B2\tC1 C2\tD1 D2\n");
	if((*RegA).s == '0')
	{
		
		while((*RegA).num > 0) //subtraindo
		{
			
			if((*RegB).s == '0') // subtrair
			{
				
				while((*RegB).num > 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegC).num++;
					(*RegB).num--;
					
				}	
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);	
				printf("\n");		
				while((*RegC).num > 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegC).num--;
					(*RegB).num++;
					(*RegD).num++;
					
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
			}
			else // b negativo e a positivo
			{
				while((*RegB).num < 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegB).num++;
					(*RegC).num--;
					if((*RegB).num >= 0)
						(*RegB).s = '0';
					if((*RegC).num < 0)
						(*RegC).s = '1';
						
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
				while((*RegC).num < 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegC).num++;
					(*RegB).num--;
					(*RegD).num--;
					if((*RegC).num >= 0)
						(*RegC).s = '0';
					if((*RegD).num < 0)
						(*RegD).s = '1';
					if((*RegB).num < 0)
						(*RegB).s = '1';
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
			}
			(*RegA).num--;
		}
	
	}
	else // caso o a for negativo
	{
		while((*RegA).num < 0)
		{
			if((*RegB).s == '0') // caso o b for positivo
			{
				
				while((*RegB).num > 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegB).num--;
					(*RegC).num++;
					
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
				while((*RegC).num > 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegC).num--;
					(*RegB).num++;
					(*RegD).num--;
					if((*RegD).num < 0)
						(*RegD).s = '1';
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
			}
			else // caso o b for negativo
			{
				
				while((*RegB).num < 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegB).num++;
					(*RegC).num--;
					if((*RegB).num >= 0)
						(*RegB).s = '0';
					if((*RegC).num < 0)
						(*RegC).s = '1';
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
				while((*RegC).num < 0)
				{
					printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
					(*RegC).num++;
					(*RegB).num--;
					(*RegD).num++;
					if((*RegC).num >= 0)
						(*RegC).s = '0';
					if((*RegB).num < 0)
						(*RegB).s = '1'; 
					
				}
				printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
				printf("\n");
			}
		
			(*RegA).num++;
			if((*RegA).num >= 0)
				(*RegA).s = '0';
		}
		
	}
	
	printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
	printf("\n");
	if((*RegD).s == '0')
	{
		while((*RegD).num > 0)
		{
			printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
			(*RegA).num++;
			(*RegD).num--;
		}
	}
	else
	{
		while((*RegD).num < 0)
		{
			printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
			(*RegA).num--;
			(*RegD).num++;
			if((*RegA).num < 0) // pode virar negativo
				(*RegA).s = '1';
			if((*RegD).num >= 0)
				(*RegD).s = '0';
		}
		
	}
	printf("%c %d\t%c %d\t%c %d\t%c %d\n", (*RegA).s, (*RegA).num, (*RegB).s, (*RegB).num, (*RegC).s, (*RegC).num, (*RegD).s, (*RegD).num);
	getch();
}
char Menu(void)
{
	printf ("[A] A:= A + B\n");
	printf ("[B] A:= A + B usando C\n");
	printf ("[C] A:= B usando C\n");
	printf ("[D] A:= A X B usando C, D\n");
	printf ("\n[ESC] Sair");
	return toupper(getch());
	
}
void Executar(void)
{
	char op;
	TpReg RegA, RegB, RegC, RegD;
	RegB.num = 0;
	RegB.s = '0';
	RegC.num = 0;
	RegC.s = '0';
	RegD.num = 0;
	RegD.s = '0';
	do
	{
		
		clrscr();
		op = Menu();
		switch(op)
		{
			case 'A':
				clrscr();
				inserirRegistro(&RegA, 'A');
				inserirRegistro(&RegB, 'B');
				Programa1(&RegA, &RegB);
				break;
			case 'B':
				clrscr();
				inserirRegistro(&RegA, 'A');
				inserirRegistro(&RegB, 'B');
				Programa2(&RegA, &RegB, &RegC);
				break;
			case 'C':
				clrscr();
				inserirRegistro(&RegA, 'A');
				inserirRegistro(&RegB, 'B');
				Programa3(&RegA, &RegB, &RegC);
				break;
			case 'D':
				clrscr();
				inserirRegistro(&RegA, 'A');
				inserirRegistro(&RegB, 'B');
				Programa4(&RegA, &RegB, &RegC, &RegD);
				break;
				
		}		
		
	}while(op != 27);
	
}
int main(void)
{
	Executar();
	return 0;
}
