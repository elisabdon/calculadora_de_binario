#include <stdio.h>
#include <windows.h>

void decimal_Binario
(int decimal) 
{
    if (decimal == 0) 
	{
        return;
    }
    decimal_Binario(decimal / 2);
    printf("%d", decimal % 2);
}

int main() 
{
    int decimal;
	system("color 05");
	printf("\t\t\t\t\t\t\t    == CALCULADORA DE BINARIO ==\n");
    printf("\t\t\t\t\t\t-DIGITE O NUMERO QUE DESEJA TRANSFORMAR PARA BINARIO- \n ");
    printf("\t\t\t\t\t\t\t\t--> ");
    scanf("%d", &decimal);
    
	system("color C");
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t .  CAlCULANDO .  ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t . .  CALCULANDO . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t . . .  CALCULANDO . . . ");
	Sleep(400); 
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t . . . .  CALCULANDO . . . . ");
	Sleep(400); 	
	system("cls"); 
	printf("\n\n\t\t\t\t\t\t\t . . . . .  CALCULANDO . . . . . ");
	Sleep(400); 	
	system("cls"); 

	system("color 06");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t == RESULTADO ");
    decimal_Binario(decimal);
    printf(" ==");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
   	return 0;
}