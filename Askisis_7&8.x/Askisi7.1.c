#include <stdio.h>
#include <stdlib.h>
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 7.1
HMEROMHNIA : 22/11/2022
ARITHMOS MHTRWOY : 2022005
*/

// Gemisma pinaka
void fillPin(int n, int p[])
{
    int i;
    for (i = 0; i < n; i++) {
        p[i] = ((rand() % 10) + 1);
    }
}
// Emfanisi pinaka
void showPin(int n, int p[])
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d = %d\n",i , p[i]);
    }
}
// Evresi thesis megaliterou se pinaka
int findThesiMax(int n, int p[])
{
    int i, max = p[0], max_thesi = 0;
    for (i = 0; i < n; i++) {
        if (p[i] > max) {
            max_thesi = i;
            max = p[i];
        }
    }
    return max_thesi;
}
// Evresi thesis megaliterou se pinaka
int findThesiMin(int n, int p[])
{
    int i, min = p[0], min_thesi = 0;
    for (i = 0; i < n; i++) {
        if (p[i] < min) {
            min_thesi = i;
            min = p[i];
        }
    }
    return min_thesi;
}
// Evresi plithous arithmon ano tou Mesou Orou
int countAvg(int n, int p[])
{
    int i, counter = 0, s = 0;
    double avg;
    for (i = 0; i < n; i++) {
        s = s + p[i];
    }
    avg = (double)s / n;
    for (i = 0; i < n; i++) {
        if (p[i] > avg)
            counter++;
    }
//    printf("avg = %f\n", avg); // for check and comment
    return counter;
}
// Evresi thesis arithmou search_num mesa ston pinaka. An den vrethei arithmos epistrefei to -1
int searchPThesiNum(int search_num, int n, int p[])
{
    int i, thesi_num = -1;
    for (i = 0; i < n; i++) {
        if (p[i] == search_num) {
            thesi_num = i;
            break; //  Apenergopoiisi tis break an den theloume na stamataei tin anazitisi me tin evresi tou 1ou arithmou
		}
    }
//    printf("thesi_num = %d\n", thesi_num); // for check and comment
    return thesi_num;    
}
// Fthinousa taksinomisi pinaka -> Sto epomeno mathima
void bubbleDesc(int n, int p[])
{
	printf("Sorting... to be continued.\n");
//    int i, thesi_min;
//    printf("Sorting... please wait.\n");
//    for (i = n; i >= 2; i--) {
//        thesi_min = findThesiMin(i, p);
//    }
}
// ***** Kyrios programma *****
main()
{
    int n, num, search_num, thesi_max, thesi_min;
    do {
        printf("Give an integer > 5 : ");
        scanf("%d", &n);
    } while (n <= 5);
    int pin[n];
    fillPin(n, pin);
    showPin(n, pin);
    thesi_max = findThesiMax(n, pin);
    printf("max = %d thesiMax = [%d]\n", pin[thesi_max], thesi_max);
    thesi_min = findThesiMin(n, pin);
    printf("min = %d thesiMin = [%d]\n", pin[thesi_min], thesi_min);
    printf("countAvg = %d\n", countAvg(n, pin));
    
    printf("Give an integer num : ");
    scanf("%d", &num);
    search_num = searchPThesiNum(num, n, pin); // An den vrethei arithmos epistrefei to -1
    if (search_num != -1) // Vrethike arithmos
        printf("Found num = %d in position %d, pin[%d] = %d.\n", num, search_num, search_num, pin[search_num]);
    else // Den vrethike arithmos
        printf("NOT FOUND.\n");

    bubbleDesc(n, pin);
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}
