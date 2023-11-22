#include <stdio.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.3
    HMEROMHNIA : 1/11/2022
    ARITHMOS MHTRWOY : 2022005
    */

    // Dilosi metavliton
	char praksi[1];
    int a, b;
    double apotelesma;
	// Eisagogi dedomenon
    printf("Dose ena symvolo praksis: ");
    scanf("%c",&praksi);
    printf("Dose dyo integers (a & b): ");
    scanf("%d %d",&a, &b);
	// Ypologismoi & Emfanisi apotelesmaton
    switch (praksi[0]) {
        case '+' :  apotelesma = a + b;
        			printf("To apotelesma %d %c %d einai: %.0f\n",a, praksi[0], b, apotelesma);
                    break;
        case '-' :  apotelesma = a - b;
        			printf("To apotelesma %d %c %d einai: %.0f\n",a, praksi[0], b, apotelesma);
                    break;
        case '*' :  apotelesma = a * b;
        			printf("To apotelesma %d %c %d einai: %.0f\n",a, praksi[0], b, apotelesma);
                    break;
        case '/' :  if (b != 0)
                        apotelesma = (double)a / b;
	        			printf("To apotelesma %d %c %d einai: %.2f\n",a, praksi[0], b, apotelesma);
                    break;
        default :   printf("Mh apodekth praksh.\n");
    }
	// Anamoni pliktrou gia eksodo
    system("Pause");
}
