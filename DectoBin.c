#include <stdio.h>

int main(){
	
	int x, rest, num, cont = 1, contador;
	int vetor[128];

	while(cont){
		contador = 0;
		printf(" Digite o numero decimal: ");
		scanf("%d", &num);
		getchar();

		printf("\n O correspondente em binario e: "); 

		while(1){
			rest = num%2;
			vetor[contador] = rest; // colocando os restos no array
			contador++; // contando quantos elementos estao no array

			num = num/2;

			if((num/2) == 0){
				//contador++;
				vetor[contador] = num;
				while(contador >= 0){
					printf("%d", vetor[contador]);
					contador = contador-1;
					//printf("\n%d contador\n" );
				}
				break;
			}
		}
		printf("\n\n Deseja efetuar outra conversao? Sim(1), Nao(0)\n\n");
		scanf("%d", &cont);
		getchar();
	}

	printf("          Te amo mon amour ! bjs linda! - Rodolfo\n");
	getchar();
	return 0;
}