/* Realizar un programa en C que lea en un array de estructuras
   los datos de los N trabajadores de la empresa y que imprima 
   los datos del empleado con mayor y menor salario */
   
#include <stdio.h>
#include <ctype.h>
#define dimensionar(n)  (int*)malloc(sizeof(int)*n); //(int *) se le llama casteo (convertir de una variable a otro tipo)

struct empleado{
	char *nombre[100];
	char *sexo[20];
	float salario_semanal;
	int edad;
}employees[100];

int main(){
	
	int option, i=1;
	int *age;
	
	age=dimensionar(100);
	// = dimensionar(100);
	//char name[];
	
		
	do{
		printf("\nELIGE UNA OPCION: \n1)Introducir un nuevo empleado \n2)Modificar un empleado \n3)Mostrar todos los empleados \n4)Terminar \n");
		scanf("%d", &option);
		//opcion=tolower(opcion);
		//printf("%c", op);

		switch(option){
			case 1:
				printf("INTRODUCE LOS SIGUIENTES DATOS DE TU EMPLEADO: \nNOMBRE: ");
				scanf("%s", &employees[i].nombre);

				printf("\nSEXO: ");
				scanf("%s", &employees[i].sexo);
				
				printf("\nSALARIO SEMANAL: ");
				scanf("%f", &employees[i].salario_semanal);
				
				printf("\nEDAD: ");
				scanf("%d", &employees[i].edad);				
				
				/*---------- IMPRESIONES DE PRUEBA ----------------*/
				printf("\n%s", employees[i].nombre);
				printf("\n%s", employees[i].sexo);
				printf("\n%.3f", employees[i].salario_semanal);
				printf("\n%d", employees[i].edad);
				
				/*------------------------------------------------*/
				
				i =+ 1;
				
				break;
			
			case 2:
				printf("A CONTINUACIÓN SE TE MUESTRA LA LISTA DE EMPLEADOS \nESCRIBE EL NUMERO DE EMPLEADO QUE DESEAS EDITAR: ");
				scanf("%d", &option);
		}
		
	}while(option != 4);
		printf("\n PROGRAMA TERMINADO");
	
	return 0;
}
