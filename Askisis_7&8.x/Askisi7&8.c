#include <stdio.h>
#include <stdlib.h>

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 7 & 8
HMEROMHNIA : 29/11/2022
ONOMA : PANAGIOTIS ALEVROPOULOS
ARITHMOS MHTRWOY : 2022005
*/

// Gemisma pinaka
void fillPin(int n, int p[])
{
    int i;
    for (i = 0; i < n; i++) {
        p[i] = (rand()% (10-1 + 1) + 1);
    }
}
// Emfanisi pinaka
void showPin(int n, int p[])
{
    int i;
    printf("pin = ");
    for (i = 0; i < n; i++) {
        printf("%d ",p[i]); // Emfanisi olon ton imon se mia grammi
//        printf("%d = %d\n",i , p[i]); // Emfanisi timis & thesis se nea grammi
    }
    printf("\n");
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
    printf("avg = %f\n", avg); // for check and/or comment
    return counter;
}
// Evresi arithmou search_num mesa ston pinaka
int searchPThesiNum(int n, int p[], int search_num)
{
    int i, thesi_num = -1;
    for (i = 0; i < n; i++) {
        if (p[i] == search_num) {
            thesi_num = i;
            break;
        }
    }
//    printf("thesi_num = %d\n", thesi_num); // for check and comment
    return thesi_num;   
}
// Swap timon se thesis pinaka
void swapPin(int p[], int a, int b)
{
    int tmp;
    tmp = p[a];
    p[a] = p[b];
    p[b] = tmp;
}
// Fthinousa taksinomisi pinaka -> Sto epomeno mathima
void bubbleDesc(int n, int p[])
{
//    printf("Sorting... to be continued.\n");
    int i, j, tmp;
    printf("Sorting... please wait.\n");
    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (p[j] < p[j + 1]) {
                tmp = p[j];         // swap thesis
                p[j] = p[j + 1];    // swap thesis
                p[j + 1] = tmp;     // swap thesis
//                swapPin(p, j, j + 1); // H me klisi tiw synartisis swapPin
            }
        }
    }
}
// Diadiki evresi arithmou search_num mesa ston pinaka
int binarysearchPThesiNum(int p[], int search_num, int a, int b)
{
    int mid, thesi_num = -1;
    while (a <= b && thesi_num == -1) {
        mid = (a + b) / 2;
//        printf("mid = %d\n", mid); // for check and comment
        if (search_num == p[mid])
            thesi_num = mid;
        else
            if (search_num > p[mid])
                b = mid - 1;
            else
                a = mid + 1;
    }
    return thesi_num;
}

// ***** Kyrios programma *****
main()
{
	// Dilosi metavliton
    int n, num, search_num, thesi_max, thesi_min;
    // Eisagogi megethous pinaka
	do {
        printf("Give an integer > 5 : ");
        scanf("%d", &n);
    } while (n <= 5);
    // Kathorismos megethous pinaka
    int pin[n];
    // Gemisma pinaka
	fillPin(n, pin);
	// Emfanisi pinaka
    showPin(n, pin);
    // Evresi kai emfanisi megistou stoixeiou ston pinaka
    thesi_max = findThesiMax(n, pin);
    printf("max = %d thesiMax = [%d]\n", pin[thesi_max], thesi_max);
    // Evresi kai emfanisi elaxistou stoixeiou ston pinaka
    thesi_min = findThesiMin(n, pin);
    printf("min = %d thesiMin = [%d]\n", pin[thesi_min], thesi_min);
    // Evresi kai emfanisi mesou orou kai stoixeion ano tou mesou orou
	printf("countAvg = %d\n", countAvg(n, pin));
	// Eisagori arithmou gia seiriaki anazitisi ston pinaka
    printf("\nGive an integer num : ");
    scanf("%d", &num);
	// Seiriaki anazitisi ston pinaka
    search_num = searchPThesiNum(n, pin, num);
    // Emfanisi apotelesmaton anazitisis. An epistrepsei -1 den vrethike to stoixeio
	if (search_num != -1)
        printf("Found num = %d in position %d, pin[%d] = %d.\n\n", num, search_num, search_num, pin[search_num]);
    else
        printf("NOT FOUND.\n\n");
	// Fthinousa taksinomisi pinaka
    bubbleDesc(n, pin);
	// Emfanisi pinaka
    showPin(n, pin);
	// Eisagori arithmou gia dyadiki anazitisi ston pinaka
    printf("\nGive an integer num for binary search: ");
    scanf("%d", &num);
	// Dyadiki anazitisi ston pinaka
    search_num = binarysearchPThesiNum(pin, num, 0, n-1);
    // Emfanisi apotelesmaton anazitisis. An epistrepsei -1 den vrethike to stoixeio
    if (search_num != -1)
        printf("Found num = %d in position %d, pin[%d] = %d.\n", num, search_num, search_num, pin[search_num]);
    else
        printf("NOT FOUND.\n");
        
    printf("\n");
    // Swapping 2 stoixeion tou pinaka
	int index = rand()%(n-2-0+1);
    printf("Swapping numbers from random position %d and %d.\n", index, index +1);
    swapPin(pin, index, index + 1);
	// Emfanisi pinaka
    showPin(n, pin);
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}

