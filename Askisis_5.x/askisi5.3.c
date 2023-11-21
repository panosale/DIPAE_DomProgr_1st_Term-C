#include <stdio.h>
#include <stdlib.h>

main()
{
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 5.3
    HMEROMHNIA : 8/11/2022
    ARITHMOS MHTRWOY : 2022005
    */
    // Dilosi & arxikopoiisi metavliton
    int aithouses = 0, ypopsifioi = 0;
    int xoritikotita = 0, epitirites = 0, synolo_epitiriton = 0;
    // Dilosi statheron
	int max_ypopsifioi = 100;
    // Eisagogi & ypologismos dedomenon
    do {
        printf("Dose tin xoritikotia tis aithousas: ");
        scanf("%d", &xoritikotita);
        aithouses++;
        if (xoritikotita <= 15)
            epitirites =1;
        else
            if (xoritikotita <= 23)
                epitirites = 2;
            else
                epitirites = 3;
        printf("Gia afti tin aithousa tha xreiastei/oun %d epitiritis/es.\n", epitirites);
        synolo_epitiriton = synolo_epitiriton + epitirites;
        ypopsifioi = ypopsifioi + xoritikotita;
        
    } while (ypopsifioi < max_ypopsifioi);
    // Emfanisi apotelesmaton
    printf("Synolo aithouson: %d\n", aithouses);
    printf("Synolo eitiriton: %d\n", synolo_epitiriton);
    printf("Synolo theseon: %d\n", ypopsifioi);
    // Anamoni pliktrou apo ton xristi
    system("pause");
}
