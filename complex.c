#include <stdio.h>
#include <math.h>
#include "complex.h"

void read_comp (complex *c, double a, double b){
    (*c)[0] = a;
    (*c)[1] = b;
}

void print_comp (complex c){
    printf("%.2lf + (%.2lf)i\n", c[0], c[1] );
}
