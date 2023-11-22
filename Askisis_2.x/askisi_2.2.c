#include <stdio.h>
#include <stdlib.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 2.2
	HMEROMHNIA : 18/10/2022
	*/

	// 1. Dilosi metavliton
	int N, mikos_vimatos, apostasi, km, m, cm;

	// 2. Arxikopoiisi metavliton
	N = 1589;
	mikos_vimatos = 80;

	// 3. Ypologismoi
	apostasi = N * mikos_vimatos;
	km = apostasi / 100000;
	m = apostasi % 100000;
	m = m / 100;
	cm = apostasi % 100;

	// 4. Apotelesmata
	printf("Steps = %d\nDistance = %dcm\nkm = %d\nm = %d\ncm = %d\n", N, apostasi, km, m, cm);

	// Anamoni pliktrou apo ton xristi gia eksodo
	system("Pause");
}
