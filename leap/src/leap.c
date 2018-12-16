#include "leap.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_leap_year(int year){
    if (year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else{
        return false;
    }
}
