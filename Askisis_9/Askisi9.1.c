#include <stdio.h>
#include <stdlib.h>
#define nmax 100 // Apaititai gia to perasma ton parametron se disdiastato pinaka

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T1
ERGASTHRIAKH ASKHSH : 9.1
HMEROMHNIA : 6/12/2022
ONOMA : PANAGIOTIS ALEVROPOULOS
ARITHMOS MHTRWOY : 2022005
*/

// Gemisma pinaka
void fillPin2D(int n, int p[][nmax])
{
    int i, j;
    for (i = 0; i < n; i++) // Grammes tou pinaka
        for (j = 0; j < n; j++) // Stiles tou pinaka
            p[i][j] = (rand()% (10-1 + 1) + 1);
}
// Emfanisi 1D pinaka
void showPinDouble1D(int n, double p[])
{
    int i;
    for (i = 0; i < n; i++)
        printf("%-6.2lf",p[i]); // Emfanisi olon ton imon se mia grammi
//        printf("%d = %.2lf\n",i , p[i]); // Emfanisi timis & thesis se nea grammi
	printf("\n");
}
// Emfanisi 2D pinaka
void showPin2D(int n, int p[][nmax])
{
    int i, j;
    for (i = 0; i < n; i++) { // Grammes tou pinaka
		for (j = 0; j < n; j++) // Stiles tou pinaka
//            printf("[%d, %d] = %d\t",i, j, p[i][j]); // Emfanisi ton theseon kathe stoixeiou
            printf("%-3d|", p[i][j]); // Emfanisi mono ton timon kathe thesis
        printf("\n");
    }
}
// Evresi M.O. grammon kai perasma se 1D pinaka
void findMeanLine(int n, int pin2D[][nmax], double avg_pin[])
{
    int i, j, s;
    double avg;
    for (i = 0; i < n; i++) { // Grammes tou pinaka
        s = 0;
        for (j = 0; j < n; j++) // Stiles tou pinaka
            s = s + pin2D[i][j];
        avg = (double)s / n;
        avg_pin[i] = avg;
//        printf("\ns = %d\n", s); // for check and comment
//        printf("avg_line = %.2lf\n", avg); // for check and comment
    }
}
// Evresi M.O. stilon kai perasma se 1D pinaka
void findMeanCol(int n, int pin2D[][nmax], double avg_pin[])
{
    int i, j, s;
    double avg;
    for (j = 0; j < n; j++) { // Stiles tou pinaka
        s = 0;
	    for (i = 0; i < n; i++)  // Grammes tou pinaka
            s = s + pin2D[i][j];
        avg = (double)s / n;
        avg_pin[j] = avg;
//        printf("\ns = %d\n", s); // for check and comment
//        printf("avg_line = %.2lf\n", avg); // for check and comment
    }
}
// Evresi athrismatos ton diagonion tou pinaka
int findDSum(int n, int p[][nmax])
{
	int i, j, total_sum, sum1 =0, sum2 = 0; // Dilosi & arxikopoiisi metavliton synartisis
	for (i = 0; i < n; i++) // Grammes tou pinaka
	    for (j = 0; j < n; j++) { // Stiles tou pinaka
	        if (i == j) // Evresi kyrias diagoniou
	            sum1 = sum1 + p[i][j];
	        else // An den yparxei to else, tote se pinakes me moni diastasi prostheti 2 fores ton kentriko arithmo
	            if (i + j == n-1) // Evresi defterevousas diagoniou
	                sum2 = sum2 + p[i][j];
	    }            
    /* 
	H ekfonisi tis askisis den anaferei oti prepei na ginetai emfanisi ton stoixeion tis kyrias diagoniou.
	Gia na emfanizetai kai afti h pliroforia prepei energopoiithei h parakato grammi.
	*/
	// printf("sum1D = %d", sum1);
    total_sum = sum1 + sum2;
    return total_sum;
}
// ***** Kyrios programma *****
main()
{
 	// Dilosi & arxikopoiisi metavliton
	int n, num, search_num, thesi_max, thesi_min, count_avg;
   // Eisagogi megethous pinaka
    do {
        printf("Give an integer > 5 : ");
        scanf("%d", &n);
    } while (n <= 5);
    // Kathorismos megethous pinaka
    int my2DArray[n][nmax];
    // Gemisma 2D pinaka
    fillPin2D(n, my2DArray);
	// Emfanisi 2D pinaka
	printf("2D pin = \n");
    showPin2D(n, my2DArray);
    
	// Evresi kai emfanisi mesou orou ton stoixeion kathe grammis
    double avgLine[n]; // Kathorismos pinaka meson oron
    findMeanLine(n, my2DArray, avgLine); // Evresi mesou orou grammon
    // Emfanisi pinaka meson oron grammon
	printf("avgLine = ");
    showPinDouble1D(n, avgLine);
    
	// Evresi kai emfanisi mesou orou ton stoixeion kathe stilis
    double avgCol[n]; // Kathorismos pinaka meson oron
    findMeanCol(n, my2DArray, avgCol); // Evresi mesou orou stilon
	// Emfanisi pinaka meson oron stilon
    printf("avgCol = ");
    showPinDouble1D(n, avgCol);

	// Emfanisi athrismatos ton stoixeion ton dyo diagonion tou pinaka
    printf("\nsum1D + sum2D = %d\n", findDSum(n, my2DArray));
    
    // Anamoni pliktrou apo ton xristi gia eksodo
    system("Pause");
}

