#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"


Data * newData(int code, char year[5], char mounth[3], char day[3]){
    Data *d = (Data *)malloc(sizeof(Data));

    if(d != NULL){
        strcpy(d -> year, year);
        strcpy(d -> mounth, mounth);
        strcpy(d -> day, day);
        return d;
    }
    return NULL;
}

