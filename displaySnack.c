#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "header.h"

void displaySnacks(int choice, int vendingStock[5], int vendingPrice[6], char itemList[5][20]){
    switch(choice){
        case 1: 
            printf("\nYou selected %s\n", itemList[choice-1]);
            if (vendingStock[choice-1] == 0){
                printf("Item is currently out of stock");
            }
            else{
                printf("Current in stock: %d", vendingStock[choice-1]);
               proceedToPay(itemList, choice, vendingStock, vendingPrice);
            }
            break;
         case 2: 
           printf("\nYou selected %s\n", itemList[choice-1]);
            if (vendingStock[choice-1] == 0){
                printf("Item is currently out of stock");
            }
            else{
                printf("Current in stock: %d", vendingStock[choice-1]);
                proceedToPay(itemList, choice, vendingStock, vendingPrice);
            }
            break;
         case 3: 
           printf("\nYou selected %s\n", itemList[choice-1]);
            if (vendingStock[choice-1] == 0){
                printf("Item is currently out of stock");
            }
            else{
                printf("Current in stock: %d", vendingStock[choice-1]);
               proceedToPay(itemList, choice, vendingStock, vendingPrice);
            }
            break;
         case 4: 
            printf("\nYou selected %s\n", itemList[choice-1]);
            if (vendingStock[choice-1] == 0){
                printf("Item is currently out of stock");
            }
            else{
                printf("Current in stock: %d", vendingStock[choice-1]);
                proceedToPay(itemList, choice, vendingStock, vendingPrice);
            }
            break;
         case 5: 
           printf("\nYou selected %s\n", itemList[choice-1]);
            if (vendingStock[choice-1] == 0){
                printf("Item is currently out of stock");
            }
            else{
                printf("Current in stock: %d", vendingStock[choice-1]);
               proceedToPay(itemList, choice, vendingStock, vendingPrice);
            }
            break;
    }
}