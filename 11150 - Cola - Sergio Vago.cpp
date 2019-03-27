#include <cstdio>

int bebeCola(int N, int qtd);

int main(void){
    int N = 0;

    while(scanf("%d", &N) != EOF){
		int qtdVazio = 0, qtdBebidas = 0;
    	bool flag = false;
		
		//Enquanto houver Cola para beber	
		while(N > 0){
			//Bebo o que tem  
			qtdBebidas = bebeCola(N, qtdBebidas);

			//Conto as garrafas vazias
			qtdVazio = bebeCola(N, qtdVazio);

			//Verifico se ja peguei uma garrafa emprestada
			// e se vale a pena
			if(!(flag) && (qtdVazio + 1) % 3 == 0 ){
				qtdVazio++;
				flag = true;
			}

            //Troco as garafas vazias por garrafas cheias
			N = qtdVazio / 3;

			//Conto quantas garrafas vazias sobraram apos a troca
			qtdVazio = qtdVazio % 3;
		}
		//Imprimo quantas Colas eu bebi
		printf("%d\n", qtdBebidas);
	}
    return 0;
}

int bebeCola(int N, int qtd){
    qtd += N;
    return qtd;
}
