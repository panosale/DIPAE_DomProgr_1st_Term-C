#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sxhma 
	{
		char eidos[10];
		int plevra_a;
		int plevra_b;
		float emvadon;
	} SXHMA;

SXHMA gemismaPedion(char eid[10], int pl_a, int pl_b)
{
	SXHMA tmp_sxhma;
	strcpy(tmp_sxhma.eidos, eid);
	tmp_sxhma.plevra_a = pl_a;
	tmp_sxhma.plevra_b = pl_b;
	return tmp_sxhma;
}

void emfanishPedion(SXHMA sx)
{
	printf("Sxhma: %s\n", sx.eidos);
	printf("Plevra a: %d\n", sx.plevra_a);
	printf("Plevra b: %d\n", sx.plevra_b);
	printf("Emvadon: %f\n", sx.emvadon);
}

float return_emvadon(SXHMA sx)
{
	float tmp_emvadon;
	if (strcmp(sx.eidos, "TRIGONO") == 0)   // Den leitourgei kala o elegxos tou string
		tmp_emvadon = (float)(sx.plevra_a * sx.plevra_b) / 2;
	else
		tmp_emvadon = (float)(sx.plevra_a * sx.plevra_b);
	return tmp_emvadon;
}

void set_emvadon_all(int n, SXHMA p[])
{
	int i;
	for (i = 0; i < n; i++)
		p[i].emvadon = return_emvadon(p[i]);
}

void find_min_emvadon_1_2(int n, SXHMA p[])
{
	int min1 = 0;
	int min2 = 0;
	int i;
	for (i = 1; i < n; i++)
		if (p[i].emvadon < p[min1].emvadon) {
			min2 = min1;
			min1 = i;
		}
	emfanishPedion(p[min1]);
	emfanishPedion(p[min2]);
}

main()
{
	int i, n, tmp_pl_a, tmp_pl_b;
	char tmp_eidos[10];
	do {
		printf("Give array size: ");
		scanf("%d", &n);
	}
	while (n > 5);
	SXHMA sx[n];
	for (i = 0; i < n; i++) {
		printf("Give eidos: ");
		scanf("%s", &tmp_eidos);
		printf("Give plevra a: ");
		scanf("%d", &tmp_pl_a);
		printf("Give plevra b: ");
		scanf("%d", &tmp_pl_b);
		sx[i] = gemismaPedion(tmp_eidos, tmp_pl_a, tmp_pl_b);
	}
	set_emvadon_all(n, sx);
	printf("***********************\n");
	for (i = 0; i < n; i++)
		emfanishPedion(sx[i]);
	printf("***********************\n");
	find_min_emvadon_1_2(n, sx);
}
