#ifdef CARSLOT_H
#define CARSLOT_H
#endif

typedef struct carslot *carSlotPTR;

carSlotPTR createCarSlot();
void setcarBrand(char brand[10], carSlotPTR ptr);
void setcarModel(char model[10], carSlotPTR ptr);
void printModel(carSlotPTR ptr);
void printBrand(carSlotPTR ptr);

