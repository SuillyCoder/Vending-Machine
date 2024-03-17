#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "header.h"
#include "displaySnack.c"
#include "proceedToPay.c"

int main(){
    int choice;
    int vendingStock[]= {25, 25, 25, 25, 25};
    int vendingPrice[] = {15, 30, 20, 25, 12, 1000};
    char itemList[5][20] = {"Skyflakes", "Mr. Chips", "Presto", "Boy Bawang", "Choc-Nut"};
    
do{
    printf("\n\n========== ENZO'S EATERY!!! ========\n\n");
    printf("Here's our menu!\n\n");
    printf("[1] SKYFLAKES: PHP 15.00\n[2] MR. CHIPS: PHP 30.00\n[3] PRESTO: PHP 20.00\n[4] BOY BAWANG: PHP 25.00\n[5] CHOC-NUT: PHP 12.00\n[0] EXIT\n\n");
    printf("Your choice: "); scanf("%d", &choice);

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 0 ){
        printf("Enter a valid choice: "); scanf("%d", &choice);
    }

    displaySnacks(choice, vendingStock, vendingPrice, itemList);

}while(choice != 0);

printf("\n\nThank you for using the 'Enzo's Eatery' Vending Machine!");
    
    return 0;
}