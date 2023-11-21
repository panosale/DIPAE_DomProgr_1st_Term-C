#include <stdio.h>

main() 
{
	int a,b, c;
	printf("Give a: ");
	scanf("%d", &a);
	printf("Give b: ");
	scanf("%d", &b);
	printf("Give c: ");
	scanf("%d", &c);
	if (a < b)
		if (a < c)
			printf("Mikroteri timi = a = %d", a);
		else
			if (c < b)
				printf("Mikroteri timi = c = %d", c);
			else
				printf("Mikroteri timi = b = %d", b);
	else
		if (b < c)
			printf("Mikroteri timi = b = %d", b);
		else
			printf("Mikroteri timi = c = %d", c);
}
