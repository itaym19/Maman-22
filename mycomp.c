#include <stdio.h>

int main()
{
    double real, img;
    complex A,B,C,D,E,F;
    printf("enter real and img values for A\n");
    scanf("%lf %lf", &real,&img);
    read_comp(&A, real, img);
    printf("enter real and img values for B\n");
    scanf("%lf %lf", &real,&img);
    read_comp(&B, real, img);
    printf("\nA value:\n");
    print_comp(A);
    printf("\nB value:\n");
    print_comp(B);
    printf("\nA + B value:\n");
    add_comp(A,B);
    printf("\nA - B value:\n");
    sub_comp(A,B);
    printf("\nenter real values to multuply A\n");
    scanf("%lf", &real);
    printf("\nA * %.2lf value:\n", real);
    mult_comp_real(A, real);
    printf("\nenter img value to multuply A\n");
    scanf("%lf", &img);
    printf("\nA * %.2lfi value:\n", img);
    mult_comp_img(A, img);
    printf("\nA * B value:\n");
    mult_comp_comp(A,B);

    return 0;
}
