#include <stdio.h>
#include <stdlib.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.6
    HMEROMHNIA : 1/11/2022
    ARITHMOS MHTRWOY : 2022005
    */

	// Dilosi metavliton
    int month;
	// Eisagogi dedomenon
    printf("Dose ton mina: ");
    scanf("%d",&month);
	// Ypologismoi & Emfanisi apotelesmaton
        if (month == 1 || month == 2 || month == 12)
        	printf("H epoxi einai Xeimonas.\n");
        else
        	if (month == 3 || month == 4 || month == 5)
				printf("H epoxi einai Anoiksi.\n");
			else
				if (month == 6 || month == 7 || month == 8)
        			printf("H epoxi einai Kalokairi.\n");
        		else
        			if (month == 9 || month == 10 || month == 11)
        				printf("H epoxi einai Fthinoporo\n");
    				else
    					printf("Edoses lathos epoxi.\n");
	// Anamoni pliktrou gia eksodo   
    system("Pause");
}
