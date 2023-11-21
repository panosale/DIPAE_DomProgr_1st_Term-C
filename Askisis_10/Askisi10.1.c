#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define apozimiosiYperorias 20

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 10.1
HMEROMHNIA : 13/12/2022
ONOMA : PANAGIOTIS ALEVROPOULOS
ARITHMOS MHTRWOY : 2022005
*/

// Dilosi domis ypallhlou
struct ypallhlos
{
    char name[50];
    int aM;
    int eidosPtyxiou;
    int oresYperorias;
    double vasikosMisthos;
};

// Parametriko gemisma pedion domis ypallhlou
struct ypallhlos gemismaPedion(char n[], int am, int eidos_ptyxiou, int ores_yperorias, double vasikos_misthos)
{
    struct ypallhlos tmp_ypallhlos;
    strcpy (tmp_ypallhlos.name, n);
    tmp_ypallhlos.aM = am;
    tmp_ypallhlos.eidosPtyxiou = eidos_ptyxiou;
    tmp_ypallhlos.oresYperorias = ores_yperorias;
    tmp_ypallhlos.vasikosMisthos = vasikos_misthos;
    return tmp_ypallhlos;
}

// Emfanisi pedion domis ypallhlou
void emfanishPedion(struct ypallhlos yp)
{
    printf("Name: %s\n", yp.name);
    printf("AM: %d\n", yp.aM);
    printf("Ptyxio: %d\n", yp.eidosPtyxiou);
    printf("Yperories: %d\n", yp.oresYperorias);
    printf("Vasikos misthos: %.2lf\n", yp.vasikosMisthos);
}
// Vriskei kai emfanizei ton teliko mistho
void findTMisthos(struct ypallhlos yp)
{
    double syn_yperorion, tel_misthos, epidoma;
    syn_yperorion = yp.oresYperorias * 20;
    switch (yp.eidosPtyxiou) {
        case 1: epidoma = 300;
                break;
        case 2: epidoma = 150;
                break;
        case 3: epidoma = 100;
                break;
        case 4: epidoma = 50;
                break;
        default: epidoma = 0;
    }
    tel_misthos = yp.vasikosMisthos + syn_yperorion + epidoma;
    printf ("O telikos misthos tou %s me ti xrisi tis findTMisthos, einai : %.2lf\n", yp.name, tel_misthos);
}
// Vriskei kai epistrofei ton teliko mistho
double returnTMisthos(struct ypallhlos yp)
{
    double syn_yperorion, tel_misthos, epidoma;
    syn_yperorion = yp.oresYperorias * apozimiosiYperorias;
    switch (yp.eidosPtyxiou) {
        case 1: epidoma = 300;
                break;
        case 2: epidoma = 150;
                break;
        case 3: epidoma = 100;
                break;
        case 4: epidoma = 50;
                break;
        default: epidoma = 0;
    }
    tel_misthos = yp.vasikosMisthos + syn_yperorion + epidoma;
    return tel_misthos;
}
// Evresi megistou misthou metaksi 2 ypallilon
void findMaxTM(struct ypallhlos y1, struct ypallhlos y2)
{
    if (returnTMisthos(y1) > returnTMisthos(y2))
    	printf("TB yp1  = %.2lf > TB yp2 = %.2lf.\n", returnTMisthos(y1), returnTMisthos(y2));
    else
    	printf("TB yp2  = %.2lf > TB yp1 = %.2lf.\n", returnTMisthos(y2), returnTMisthos(y1));
}

// Afti h synartisi synartisi den epistrefei sosta apotelesmata...
void swapYp1Yp2(struct ypallhlos y1, struct ypallhlos y2)
{
	struct ypallhlos tmp_yp;
    tmp_yp = y1;
    y1 = y2;
    y2 = tmp_yp;
}
// ...kai prepei na ylopoiithei me deiktes (opos parakato).
/* void swapYp1Yp2(struct ypallhlos *y1, struct ypallhlos *y2)
{
	struct ypallhlos tmp_yp;
    tmp_yp = *y1;
    *y1 = *y2;
    *y2 = tmp_yp;
}
*/
// Kyrios programma
main()
{
    // Dilosi metavliton
    struct ypallhlos yp1, yp2;
    char tmp_name[50];
    int tmp_aM, tmp_eidosPtyxiou, tmp_oresYperorias;
    double tmp_vasikosMisthos, telikosMisthos;
    struct ypallhlos tmp_yp;
    // Gemisma me statheres times
    yp1 = gemismaPedion("Ioannou", 191234, 1, 7, 600);
    // Emfanisi ypallhlou 1
    printf("***** Stoixeia ypallhlou 1.\n");
    emfanishPedion(yp1);
    findTMisthos(yp1);
    printf("Telikos misthos me ti xrisi tis returnTMisthos: %.2lf\n", returnTMisthos(yp1));
    // Gemisma me eisagogi stoixeion apo ton xristi
    printf("\n");
    printf("Dose to onoma tou ypallhlou : ");
    scanf("%s", tmp_name);
    printf("Dose ton arithmo mitroou tou %s : ", tmp_name);
    scanf("%d", &tmp_aM);
    printf("Dose to eidos ptyxiou tou %s : ", tmp_name);
    scanf("%d", &tmp_eidosPtyxiou);
    printf("Dose tis ores yperorias tou %s : ", tmp_name);
    scanf("%d", &tmp_oresYperorias);
    printf("Dose ton vasiko mistho tou %s : ", tmp_name);
    scanf("%lf", &tmp_vasikosMisthos);
    yp2 = gemismaPedion(tmp_name, tmp_aM, tmp_eidosPtyxiou, tmp_oresYperorias, tmp_vasikosMisthos);
    // Emfanisi ypallhlou 2
    printf("\n");
    printf("***** Stoixeia ypallhlou 2.\n");
    emfanishPedion(yp2);
    findTMisthos(yp2);
    printf("Telikos misthos me ti xrisi tis returnTMisthos: %.2lf\n", returnTMisthos(yp2));
 	// Evresi ypallhlou me ton megalitero mistho.
    printf("*****************************************************\n");
    printf("***** Evresi ypallhlou me ton megalitero mistho.\n");
	findMaxTM(yp1, yp2);
    // Enallagi ypallhlon sti main()
    printf("*****************************************************\n");
    printf("***** Enallagi structures mesa sti main.\n");
    tmp_yp = yp1;
    yp1 = yp2;
    yp2 = tmp_yp;
    printf("***** Ypallhlos 1 after swap yp1 yp2.\n");
	emfanishPedion(yp1);
    printf("***** Ypallhlos 2 after swap yp1 yp2.\n");
    emfanishPedion(yp2);
    printf("*****************************************************\n");
    // Enallagi ypallhlon me klisi synartisis
    printf("***** Enallagi structures me klisi synartisis.\n");
//  Klisi swapYp1Yp2 me pointers (by reference)
//	swapYp1Yp2(&yp1, &yp2);
//  Klisi swapYp1Yp2 me parametrous (by value)
    swapYp1Yp2(yp1, yp2);
    printf("***** Ypallhlos 1 after call swapYp1Yp2().\n");
    emfanishPedion(yp1);
    printf("***** Ypallhlos 2 after call swapYp1Yp2().\n");
    emfanishPedion(yp2);
    printf("\n");
   // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
