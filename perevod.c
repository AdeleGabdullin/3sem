#include <stdio.h> 

//FIXIT: 1) не используйте транслит 2) из названия ф-и непонятно, что именно она делает
void perevod(int n)
{ 
//FIXIT: нужно поправить форматирование кода
	if (n >= 2)
{
	perevod(n/2);
}
	printf("%d", n % 2);
} 
int main ()
{
	int n;
	scanf("%d", &n);
	perevod(n);
	printf("\n");
 
	return 0;
}
