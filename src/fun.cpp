// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int num = 1;
    int i;
    for (i=1;i<=n;i++)
    { num = num * x; }
    return num;
}
