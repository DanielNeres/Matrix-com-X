#include<stdio.h>

int main(){
	int i, j, matriz = 0, escolha = 0;
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matriz++;
            printf("\t%d", matriz);
		}
		printf("\n");
	}
	printf("digite o numero que deseja trocar por X\n");
	scanf("%d", &escolha);

	
    return 0;
}
