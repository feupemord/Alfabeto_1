#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct oi{
	int oi3;
}oi;

void aloca_alfabeto(oi *p,int qtde);
void aloca_numero(oi *p);

int main(){
	int i;
oi	*p = NULL;
	do{
	  printf("[1]Alfabeto\n[2]Numeros\n[3]Sair\n");
	  printf("Resposta: ");
	  scanf("%i", &i);
		switch(i){
			case 1:
				printf("\nAlfabeto\n");
					system("cls");
				 aloca_alfabeto(p,5);
				 
				break;
				
					case 2:
							printf("\nNumeros\n");
							system("cls");
							 aloca_numero(p);
                                
				break;
		}
	}while(i !=3);
	
return 0;
}

void aloca_alfabeto(oi *p,int qtde){
int i;
do{

for(i=0; i<100; i++){
	
printf("\t\tA\n");
printf("\t\tB\n");
printf("\t\tC\n");
printf("\t\tD\n");
printf("\t\tE\n");
printf("\t\tF\n");
printf("\t\tG\n");
printf("\t\tH\n");
printf("\t\tI\n");
printf("\t\tJ\n");
printf("\t\tK\n");
printf("\t\tL\n");
printf("\t\tM\n");
printf("\t\tN\n");
printf("\t\tO\n");
printf("\t\tP\n");
printf("\t\tQ\n");
printf("\t\tR\n");
printf("\t\tS\n");
printf("\t\tT\n");
printf("\t\tU\n");
printf("\t\tV\n");
printf("\t\tW\n");
printf("\t\tX\n");
printf("\t\tY\n");
printf("\t\tZ\n");	
//system("cls");
system("pause");
exit(1);															
}
}while(i);
}
void aloca_numero(oi *p){
	
int i;
do{

for(i=0; i<100; i++){
	
printf("\t\t1\n");
printf("\t\t2\n");
printf("\t\t3\n");
printf("\t\t4\n");
printf("\t\t5\n");
printf("\t\t6\n");
printf("\t\t7\n");
printf("\t\t8\n");
printf("\t\t9\n");
printf("\t\t10\n");
printf("\t\t11\n");
printf("\t\t12\n");
printf("\t\t13\n");
printf("\t\t14\n");
printf("\t\t15\n");
printf("\t\t16\n");
printf("\t\t17\n");
printf("\t\t18\n");
printf("\t\t19\n");
printf("\t\t20\n");
printf("\t\t21\n");
printf("\t\t22\n");
printf("\t\t23\n");
printf("\t\t24\n");
printf("\t\t25\n");
printf("\t\t26\n");	
printf("\t\t27\n");	
printf("\t\t28\n");	
printf("\t\t29\n");	
printf("\t\t30\n");	
printf("\t\t31\n");	
printf("\t\t32\n");	
printf("\t\t33\n");	
printf("\t\t34\n");	
printf("\t\t35\n");	
printf("\t\t36\n");	
printf("\t\t37\n");	
printf("\t\t38\n");	
printf("\t\t39\n");	
printf("\t\t40\n");	
printf("\t\t41\n");	
printf("\t\t42\n");	
printf("\t\t43\n");	
printf("\t\t44\n");	
printf("\t\t45\n");	
printf("\t\t46\n");	
printf("\t\t47\n");	
printf("\t\t48\n");	
printf("\t\t49\n");	
printf("\t\t50\n");	
printf("\t\t50\n");	
printf("\t\t\n");	



//system("cls");
system("pause");
exit(1);															
}
}while(i);
}
													

