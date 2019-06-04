#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	int a, b, c, total;
	printf("Digite o numero de carros: \n");
	scanf("%d", &a);
	int mat_largada[a];
	int mat_chegada[a];
	printf("Digite a ordem de largada: \n");
	for (int d = 0; d < a; d++) {
		scanf("%d", &b);
			mat_largada[d] = b;
	};
	printf("Digite a ordem de chegada: \n");
	for (int e = 0; e < a; e++) {
		scanf("%d", &c);
			mat_chegada[e] = c;
	};
	int conta_ult = 0;
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 5; y++) {
			if (mat_chegada[x] == mat_largada[y]){
				c = y - x;
				if (c > 0) {
					conta_ult = conta_ult + c;
				}
			}
		}
	};
	printf("Ultrapassagens: %i", conta_ult);
	return 0;
}
