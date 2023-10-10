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
matriz = 0;
for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		matriz++;
			if (matriz == escolha)
			{
				printf("\tX");
			}else{
	    printf("\t%d", matriz);
	}
	}
	printf("\n");
}

return 0;
}
