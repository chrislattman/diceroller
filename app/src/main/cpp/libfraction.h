//
// Created by Chris Lattman on 11/26/24.
//

#ifndef DICEROLLER_LIBFRACTION_H
#define DICEROLLER_LIBFRACTION_H

#include <stdio.h>

typedef struct fraction {
    int numerator, denominator;
    const char *str;
    void (*print_func)(const char *);
} Fraction;

int fraction_multiply(Fraction *frac1, Fraction *frac2);

#endif //DICEROLLER_LIBFRACTION_H
