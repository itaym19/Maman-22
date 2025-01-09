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

void add_comp (complex a, complex b){
    double real, img;
    complex c;
    real = a[0] + b[0];
    img = a[1] +b[1];
    read_comp(&c, real, img);
    print_comp(c);
}


void sub_comp (complex a, complex b){
    double real, img;
    complex c;
    real = a[0] - b[0];
    img = a[1] - b[1];
    read_comp(&c, real, img);
    print_comp(c);
}

void mult_comp_real (complex c, double d){
    double real, img;
    complex a;
    real = c[0] * d;
    img = c[1] * d;
    read_comp(&a, real, img);
    print_comp(a);
}

void mult_comp_img (complex c, double d){
    double real, img;
    complex a;
    real = c[1] * -d;
    img = c[0] * d;
    read_comp(&a, real, img);
    print_comp(a);
}

void mult_comp_comp (complex c, complex d){
    double real, img;
    complex a;
    real = c[0] * d[0] - c[1] * d[1];
    img = c[0] * d[1] + c[1] * d[0];
    read_comp(&a, real, img);
    print_comp(a);
}

void abs_comp (complex c){
    double absolute = sqrt( pow(c[0], 2) + pow(c[1], 2) );
    printf("%.2lf", absolute);
}

void stop() {
	printf("Stopping the program...\n");
	exit(0);
}
