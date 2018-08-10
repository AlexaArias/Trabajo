// Alexa Arias Moreno B
// Tarea 7

#include<stdio.h>

int main ()
{
	char nombre[20];
	int i;
	int mayusculas;
	int minusculas;

	mayusculas=0;
	minusculas=0;

	printf("Dame un nombre\n");
	scanf("%s", nombre);
	for(i=0;i<nombre[i];i++)
	{
		printf("%c\n", nombre[i]);
	}
	for(i=0;i<nombre[i];i++)
	{
		if('A'<=nombre[i]&&nombre[i]<='Z')
	{
		mayusculas++;
	}
		if('a'<=nombre[i]&&nombre[i]<='z')
	{
		minusculas++;
	}
}
	printf("las letras mayusculas son: %d\n", mayusculas);
	peintf("las letras minusculas son: %d\n", minusculas);

	return 0;

}
