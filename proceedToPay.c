#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "header.h"

void proceedToPay(char itemList[5][20], int choice, int vendingStock[5], int vendingPrice[6]){
    int itemCount;

    if (vendingPrice[5] == 0){
        printf("\n\nYou are currently out of cash. Cannot proceed with payment\n");
    }
    else{
        printf("\n\nItem costs: PHP %d.00\n", vendingPrice[choice-1]);
        printf("Current cash on hand: %d\n\n", vendingPrice[5]);
        printf("How many would %s you like?: ", itemList[choice-1]); scanf("%d", &itemCount);

        if (vendingStock[choice-1] < itemCount){
            printf("\nNot enough stock for purchase to proceed.\n");
        }
        else{
            askForPrice(choice, itemCount, itemList, vendingPrice, vendingStock);
        }
    }
}

void askForPrice(int choice, int itemCount, char itemList[5][20], int vendingPrice[6], int vendingStock[5]){
    char confirmation, exitor;
    int totalPrice = vendingPrice[choice-1] * itemCount;
    
    if (totalPrice > vendingPrice[5]){
        printf("\nCost exceeds your current cash pool\n");
    }
    else{
        printf("%d order placements for %s. Total cost is PHP %d.00. \n\n", itemCount, itemList[choice-1], totalPrice);
        printf("Please confirm payment [Y/N]: "); scanf("%c", &confirmation);

        while (toupper(confirmation) != 'Y' && toupper(confirmation) != 'N'){
            printf("Please enter either 'Y' or 'N': "); scanf(" %c", &confirmation);
        }

        if (toupper(confirmation) == 'Y'){
            vendingPrice[5] -= totalPrice;
            vendingStock[choice-1] -= itemCount;
            printf("\n\nPayment Successful!\n");
            printf("Current cash on hand: %d\n\n", vendingPrice[5]);
            printf("Press any key to continue: "); scanf(" %c", &exitor);
        }
    }
 }
