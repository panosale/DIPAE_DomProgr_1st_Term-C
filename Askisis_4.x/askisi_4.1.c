#include <stdio.h>

main() {
    /*
    MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T1
    ERGASTHRIAKH ASKHSH : 4.1
    HMEROMHNIA : 1/11/2022
    ONOMA : PANAGIOTIS ALEVROPOULOS
    ARITHMOS MHTRWOY : 2022005
    */

    int day;
    printf("Give me a number from 1 to 7 : ");
    scanf("%d",&day);

    if (day == 1)
        printf("The first day of a week is Monday.\n");
    else
        if (day == 2)
            printf("The second day of a week is Tuesday.\n");
        else
            if (day == 3)
                printf("The third day of a week is Wednesday.\n");
            else
               if (day == 4)
                    printf("The fourth day of a week is Thursday.\n");
                else
                    if (day == 5)
                        printf("The fifth day of a week is Friday.\n");
                    else
                        if (day == 6)
                            printf("The sixth day of a week is Saturday.\n");
                        else
                            if (day == 7)
                                printf("The seventh day of a week is Sunday.\n");
                            else
                                printf("You gave a wrong number.\n");
    system("Pause");
}
