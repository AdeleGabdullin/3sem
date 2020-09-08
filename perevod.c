#include <stdio.h> 
void perevod(int n)
{ 
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
