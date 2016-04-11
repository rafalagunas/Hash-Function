#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned h(char *k, unsigned tam);

int main()
{

	unsigned tam1, funcion;
		


	tam1 = 26;
  	FILE *archivo;
 	
 	
 	char caracteres[250];
 	
 	archivo = fopen("palabrastab.txt","r");
 	
 	if (archivo == NULL)
 		exit(1);
 	
 	while (feof(archivo) == 0)
 	{
 		fgets(caracteres,250,archivo);
 
 		printf("%u %d\n",h(caracteres,tam1), strlen(caracteres));
 
 	}
        /*
        for (int j= 0; j<caracteres(streln); j++){
    }
	*/
// 	funcion = h(caracteres, tam1);

    //funcion = h(palabra,tam1);
	

	return 0;
}


unsigned h(char *k, unsigned tam){

		unsigned suma = 0;
		unsigned res = 0;

		for (int i = 0; i<strlen(k); i++){

			suma = suma + (k[i]-65);

		}

		res = suma%tam;


		return res;
}