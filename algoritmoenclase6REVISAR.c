#include <stdio.h>

struct persona{
	char nombre[30];
	int edad;
	char sexo;
};

struct elemento{
	struct persona arreglo[5];
	struct persona *ptr1,**ptr2;
};

int main(){
	struct elemento var,*ptrs;
	ptrs=&var;
	for(ptrs->ptr2=&ptrs->ptr1; *ptrs->ptr2<&ptrs->arreglo[5]; *ptrs->ptr2++){
		printf("\n Ingresa nombre: ");
		gets((*ptrs->ptr2)->nombre);
		printf("\n Ingresa edad: ");
		scanf("%d",&(*ptrs->ptr2)->edad);
		fflush(stdin);
		printf("\n Ingrese el sexo: ");
		(*ptrs->ptr2)->sexo=getchar();
		fflush(stdin);
	}
	for(ptrs->ptr2=&ptrs->ptr1; *ptrs->ptr2=&ptrs->arreglo[5]; *ptrs->ptr2++){
	printf("\n En la celda: %d esta el nombre: %s en la direccion: %lu",(int)((*ptrs->ptr2)-ptrs->arreglo),(*ptrs->ptr2)->nombre,&(*ptrs->ptr2)->nombre);	
	printf("\n En la celda: %d esta la edad: %d en la direccion: %lu",(int)((*ptrs->ptr2)-ptrs->arreglo),(*ptrs->ptr2)->edad,&(*ptrs->ptr2)->edad);
	printf("\n En la celda: %d esta el sexo: %c en la direccion: %lu",(int)((*ptrs->ptr2)-ptrs->arreglo),(*ptrs->ptr2)->sexo,&(*ptrs->ptr2)->sexo);
	}
}
