#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>

int edad,contar,contaredad,i;
float promedad;

int main()
{
	for(i=0;i<=4;i++)
	{
		system("cls");
		fflush(stdin);
		contar++;
		printf("Ingresa la edad: ");
		scanf("%d",&edad);
		contaredad+=edad;
	}
	
	promedad=contaredad/contar;
	printf("%.2f es el promedio de edad de los estudiantes",promedad);
}
