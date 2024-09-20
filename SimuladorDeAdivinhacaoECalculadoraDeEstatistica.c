#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int numero_aleatorio, tentativa1, i, contador,jogardenovo, ganhos=0, partidas_jogadas=0,ic,contadorm;
	
	srand(time(NULL));
	numero_aleatorio = rand()%100 + 1;
	
	
	while(ic==1){
	
	for(i=1;i<=10;i++){
	    
		contador = contador +1;
		
		
		printf("Digite um numero aleatorio entre 1 e 100:");
		scanf("%d",&tentativa1);
		
		if(tentativa1==numero_aleatorio){
			printf("Voce acertou o numero!\n");
			i=10;
			ganhos+=1;
			partidas_jogadas+=1;
			
			
			
			printf("O numero de tentativas foi de : %d\n",contador);
			printf("Partidas ganhas:%d\n", ganhos);
			
			printf("Voce deseja jogar novamente?Sim=1 Nao=0\n");
			scanf("%d",&jogardenovo);
			
			
			if(jogardenovo==1){
				i=0;
				
				srand(time(NULL));
	            numero_aleatorio = rand()%100 + 1;
			}else{
				
			printf("O total de partidas jogadas foram %d.\n",partidas_jogadas);
            printf("O total de partidas ganhas foram %d.\n",ganhos);
            printf("A media de tentativas para acertar o numero (nas partidas vencidas) foi de ?.");
				
				
				return 0;
			}
	 }
			
			
		else if(tentativa1<numero_aleatorio){
			printf("Voce errou o numero aleatorio!\nO numero aleatorio e maior!\n");
		}else if(tentativa1>numero_aleatorio){
			printf("Voce errou o numero aleatorio!\nO numero aleatorio e menor!\n");
        }
		
		
}
    partidas_jogadas+=1;
    
    printf("O numero de tentativas foi atingido. Deseja jogar novamente?\nSim=1 Nao=0\n");
    scanf("%d",&ic);
    
}
//media=?
printf("O total de partidas jogadas foram de %d.\n",partidas_jogadas);
printf("O total de partidas ganhas foram de %d.\n",ganhos);
printf("A media de tentativas para acertar o numero (nas partidas vencidas) foi de ?.");

			
	return 0;
}