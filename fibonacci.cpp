#include <stdio.h>

/*
	Aluno: Thiago Henrique Bueno de Oliceira;
	
	Matricula: 2011956;
*/



int fi(int n){
	if( n == 0 ){
		return 0;
	}else if( n == 1){
		return 1;
	}else{
		return fi(n-1) + fi(n-2);
	}
}

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	printf("O valor  de %i sequencia de Fibonacci  %i ", n, fi(n));
	
}
