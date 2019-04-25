#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

int main()
{
	int op1, op2, valor;
	int a = 1, b = 1, c = 1;

	printf("\n\t\tDeseja trabalhar com: \n\t1 - FILA \t\t2 - PILHA\n");
	scanf_s("%d", &op1);
	while (a == 1)
	{
		switch (op1)
		{
			case 1:
			while (b == 1)
			{
				system("cls");
				printf("\n\t\tFILA \n\n\t1 - Adicionar item a fila \n\t2 - Remover item da fila \n\t3 - Visualizar fila \n\t4 - Ir para pilha \n\t5 - Sair do programa \n");
				scanf_s("%d", &op2);
				switch (op2)
				{
					case 1:
					{
						printf("Digite o valor que deseja adicionar: ");
						scanf_s("%d", &valor);
						adiciona_f(valor);
					}
					break;
					case 2:
						remover_f();
						break;
					case 3:
						visualizar_f();
						break;
					case 4:
					{
						b = 0;
						op1 = 2;
						c = 1;
					}
						break;
					case 5:
					{
						delete_f();
						delete_p();
						a = 0;
						b = 0;
					}
						break;
					default:
					{
						do 
						{
							printf("Op%c%co inv%clida, tente novamente: ", 135, 198, 160);
							scanf_s("%d", &op2);
						} while (op2 > 5);
					}
						break;
				}
			}
			break; //break do case 1 do menu 1

		case 2:
			while (c == 1)
			{
				system("cls");
				printf("\n\t\tPILHA \n\n\t1 - Adicionar item a pilha \n\t2 - Remover item da pilha \n\t3 - Visualizar pilha \n\t4 - Ir para fila \n\t5 - Sair do programa \n");
				scanf_s("%d", &op2);
				switch (op2)
				{
					case 1:
					{
						printf("Digite o valor que deseja adicionar: ");
						scanf_s("%d", &valor);
						adiciona_p(valor);
					}
						break;
					case 2:
						remover_p();
						break;
					case 3:
						visualizar_p();
						break;
					case 4:
					{
						c = 0;
						op1 = 1;
						b = 1;
						break;
					}
					case 5:
					{
						delete_f();
						delete_p();
						a = 0;
						c = 0;
						break;
					}
					default:
					{
						do
						{
							printf("Op%c%co inv%clida, tente novamente: ", 135, 198, 160);
							scanf_s("%d", &op2);
						} while (op2 > 5);
					}
						break;
				}
			}
			break; //break do case 2 do menu 1

			default:
			{
				printf("Op%c%co inv%clida, tente novamente: ", 135, 198, 160);
				scanf_s("%d", &op1);
				break;
			}
		}
	}

	system("pause");
	return 0;
}