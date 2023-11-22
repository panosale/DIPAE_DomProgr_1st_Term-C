#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define apozimiosiYperorias 20
#define nmax 100

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 10.2
HMEROMHNIA : 20/12/2022
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
    double telikosMisthos;
};

// Vriskei kai epistrofei ton teliko mistho
double returnTMisthos(struct ypallhlos yp)
{
    double syn_yperorion, tel_misthos, epidoma;
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
                break;
    }
    syn_yperorion = yp.oresYperorias * apozimiosiYperorias;
    tel_misthos = yp.vasikosMisthos + syn_yperorion + epidoma;
    return tel_misthos;
}
// Parametriko gemisma pedion domis ypallhlou
struct ypallhlos gemismaPedion(char n[], int am, int eidos_ptyxiou, int ores_yperorias, double vasikos_misthos)
{
    struct ypallhlos tmp_ypallhlos;
    strcpy (tmp_ypallhlos.name, n);
    tmp_ypallhlos.aM = am;
    tmp_ypallhlos.eidosPtyxiou = eidos_ptyxiou;
    tmp_ypallhlos.oresYperorias = ores_yperorias;
    tmp_ypallhlos.vasikosMisthos = vasikos_misthos;
    // Me tin parakato grammi den xreiazetai na kalesoume tin setTMAll() apo ti main
//    tmp_ypallhlos.telikosMisthos = returnTMisthos(tmp_ypallhlos);
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
    printf("Telikos misthos: %.2lf\n", yp.telikosMisthos);
}
// Ypologizei ton teliko mistho kathe ypallhlou ston pinaka kai ton kataxorei sto pedio telikosMisthos
void setTMAll(int n, struct ypallhlos y[nmax])
{
    int i;
    for (i = 0; i < n; i++) {
        y[i].telikosMisthos = returnTMisthos(y[i]);
    }

}
// Epistrefei ti thesei ston pinaka tou ypallhlou me ton megisto mistho
int returnThesiMaxTM(int n, struct ypallhlos yp[nmax])
{
    int i, max_thesi_tm = 0;
    double max_tm = yp[0].telikosMisthos;
	for (i = 1; i < n; i++)
		if (yp[i].telikosMisthos > max_tm) {
			max_tm = yp[i].telikosMisthos;
			max_thesi_tm = i;
		}
	return max_thesi_tm;
}
// Enallagi ypallhlon me ti xrisi synartisis.
void swapYp1Yp2(struct ypallhlos yp[], int x, int y)
{
	struct ypallhlos tmp_yp;
    tmp_yp = yp[x];
    yp[x] = yp[y];
    yp[y] = tmp_yp;
}
// Kyrios programma
void main()
{
    // Dilosi metavliton
    struct ypallhlos yp1, yp2;
    char tmp_name[50];
    int i, n, tmp_aM, tmp_eidosPtyxiou, tmp_oresYperorias;
    double tmp_vasikosMisthos, telikosMisthos;
    // Eisagogi megethous pinaka
    do {
        printf("Give an integer <= 50 : ");
        scanf("%d", &n);
    } while (n > 50);
    struct ypallhlos yp[n];
    // Gemisma me eisagogi stoixeion apo ton xristi
    for (i = 0; i < n; i++) {
        printf("\n");
        printf("Dose to onoma tou ypallhlou [%d] : ", i);
        scanf("%s", tmp_name);
        printf("Dose ton arithmo mitroou tou ypallhlou [%d] : ", i);
        scanf("%d", &tmp_aM);
        printf("Dose to eidos ptyxiou tou [%d] : ", i);
        scanf("%d", &tmp_eidosPtyxiou);
        printf("Dose tis yperories tou [%d] : ", i);
        scanf("%d", &tmp_oresYperorias);
        printf("Dose ton vasiko mistho tou [%d] : ", i);
        scanf("%lf", &tmp_vasikosMisthos);
        yp[i] = gemismaPedion(tmp_name, tmp_aM, tmp_eidosPtyxiou, tmp_oresYperorias, tmp_vasikosMisthos);
    }
    setTMAll(n, yp); // An o ypologismos tou telikou misthou ginetai stin gemismaPedion() den xreiazetai afti h synartisi
    for (i = 0; i < n; i++) {
        printf("Ypallhlos [%d] : ", i);
        emfanishPedion(yp[i]);
        printf("\n");
	}
//  Enallagi eggrafon stis theseis index & index + 1 ston pinaka yp
	int index = (rand()% (n-2) + 1);
	printf("Pinakas after swap yp[%d] <---> yp[%d].\n", index, index + 1);
    swapYp1Yp2(yp, index, index + 1);
    for (i = 0; i < n; i++) {
        printf("Ypallhlos [%d] : ", i);
        emfanishPedion(yp[i]);
        printf("\n");
	}
    int thesi_max_TM = returnThesiMaxTM(n, yp);
	printf("Pedia ypallhlou[%d] me maxTM : \n", thesi_max_TM);
	emfanishPedion(yp[thesi_max_TM]);

   // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
