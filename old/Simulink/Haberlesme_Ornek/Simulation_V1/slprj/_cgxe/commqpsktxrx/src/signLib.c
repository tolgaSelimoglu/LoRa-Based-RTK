/* Copyright 2023 The MathWorks, Inc. */
#include "signLib.h"
#include <stdio.h>

double signDouble(double dInVal) {
    if (dInVal > 0) {
        return 1;
    } else if (dInVal < 0) {
        return -1;
    }
    return 0;
}

float signFloat(float fInVal) {
    if (fInVal > 0) {
        return 1;
    } else if (fInVal < 0) {
        return -1;
    }
    return 0;
}
