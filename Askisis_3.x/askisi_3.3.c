#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : T1
	ERGASTHRIAKH ASKHSH : 3.3
	HMEROMHNIA : 25/10/2022
	ONOMA : PANAGIOTIS ALEVROPOULOS
	ARITHMOS MHTRWOY : 2022005
	*/
	
	// Dilosi metavliton
	int ilikia, varos, ipsos;
	double dms, ipsos_se_metra;
	// Eisagogi dedomenon
	printf("Dose tin ilikia: ");
	scanf("%d", &ilikia);
	printf("Dose to varos: ");
	scanf("%d", &varos);
	printf("Dose to ipsos (se cm): ");
	scanf("%d", &ipsos);
	// Ypologismoi & emfanisi apotelesmaton
	if (ilikia > 18) {
		ipsos_se_metra = (double)ipsos / 100;
	    dms = varos / pow(ipsos_se_metra, 2);
	    printf("O Deikti Mazas Somatos einai = %lf\n", dms);
	    if (dms < 18.5) {
	    	printf("Adynato atomo.\n");
		}
    	else {
        	if (dms >= 18.5 && dms < 25) {
//            if (dms < 25 && dms >= 18.5) { // Enallaktiki 1 optimized
//            if (dms < 25) { // Enallaktiki 1
        		printf("Kanoniko atomo.\n");
			}
			else {
				if (dms >= 25 && dms < 30) {
//                if (dms < 30 && dms >= 25) { // Enallaktiki 2 optimized
//                if (dms < 30) { // Enallaktiki 2
					printf("Vary atomo.\n");
                }
				else {
					printf("Ypervaro atomo.\n");
				}
			}
		}
	}
	else {
		printf("O ypologismos tou Deikti Mazas Somatos einai adynatos.\n");
	}
	// Anamoni pliktrou gia eksodo
	system("pause"); 
}

