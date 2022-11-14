#include <stdio.h>
#include <stdlib.h>
#include "carslot.h"

typedef struct carslot {
    char carBrand[10];
    char carModel[10];
} CarSlot;

carSlotPTR createCarSlot(){
    carSlotPTR p_cs;
    p_cs = malloc (sizeof(*p_cs));
    return p_cs;
}

void setcarBrand(char brand[10], carSlotPTR ptr){
    ptr->carBrand = brand;
}

void setcarModel(char model[10], carSlotPTR ptr){
    ptr->carModel = model;
}

void printModel(carSlotPTR ptr){
    printf("%d", ptr->carModel);
}

void printBrand(carSlotPTR ptr){
    printf("%d", ptr->carBrand);
}


