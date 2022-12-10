#include <stdio.h>
#include <stdlib.h>



int main(){

   	unsigned int vetzero[200];
   	int verif;
   	int cont;
   	int i;

   	for(i = 0; i < 200; i++){      //zera todas as posiscoes do vetor vetzero
        vetzero[i] = 0;
   	}




   	while(verif != -1){                                                          //Divide cada uma das 32 posicoes binaria do unsignet int vetzero
        printf("Digite um valor entre 0 e 5000: ");                                 //em mais 32 posicoes, armazenando 1 na posicao
        scanf("%d", &verif);                                                        //digitada pelo usuario
        if(verif != -1){                                                            // ex: Caso o usuario digite 50, será armazenado 1 na posicao
                vetzero[verif/32] = vetzero[verif/32] | (1 << verif%32);            // 50 do vetzero
        }
   	}



   	for(i = 0; i < 200; i++){
        cont = (32*i);                          //verifica se há 1 na posicao do vetzero, caso tenha printara
        while(vetzero[i] != 0){                 //o valor contido na variavel cont
            if(vetzero[i] & 1 == 1){
                printf("%d ", cont);
            }

                vetzero[i] = vetzero[i] >> 1;

                cont += 1;

        }
   	}

	return 0;
}
