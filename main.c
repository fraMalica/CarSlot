#include <stdlib.h>
#include <stdio.h>
#include "carslot.h"

int main(){
    carSlotPTR cptr;
    cptr = createCarSlot();

    setcarBrand("audi", cptr);
    printBrand(cptr);
}