#include <stdio.h>

int main(){
	
	int i=1,continua,QtdF,AlunoC=0;
	float SalaMin,RendF,RendPC;
	
	printf("Escreva o salario minimo: \n");
	scanf("%f",&SalaMin);
	
	
	do{
		
		printf("Escreva a renda familiar da familia [%d]: \n",i);
		scanf("%f",&RendF);
		
		printf("Escreva a quantidade de pessoas q moram com a familia [%d]: \n",i);
		scanf("%d",&QtdF);
		
		RendPC = RendF/QtdF;
		
		if(RendPC < (SalaMin/2)){
			
			printf("A familia do Aluno [%d] recebera auxilio.",i);
			
			AlunoC++;
		}
		
		i++;
		
		printf("Para parar digite [0]: \n");
		scanf("%d",&continua);	
		
	}while(continua!=0);
	
	printf("A quantidade de alunos q recebera auxilio sera de: %d",AlunoC);
		
	return 0;
}
