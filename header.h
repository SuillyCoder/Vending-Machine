#ifndef HEADER_H
#define HEADER_H

void displaySnacks(int choice, int vendingStock[5], int vendingPrice[6], char itemList[5][20]);
void proceedToPay(char itemList[5][20], int choice, int vendingStock[5], int vendingPrice[6]);
void askForPrice(int choice, int itemCount, char itemList[5][20], int vendingPrice[6], int vendingStock[5]);

#endif