#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>

int edad,contar,contaredad;
float promedad;

int main()
{
	do
	{
		system("cls");
		fflush(stdin);
		contar++;
		printf("Ingresa la edad: ");
		scanf("%d",&edad);
		contaredad+=edad;
	}while(edad!=0);
	
	promedad=contaredad/contar;
	printf("El promedio de edad de los alumnos es: %.2f",promedad);
}
