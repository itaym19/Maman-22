#include <stdio.h>

int main()
{
    double real, img;
    complex A,B,C,D,E,F;
    printf("enter real and img values for A\n");
    scanf("%lf, %lf", &real,&img);
    read_comp(&A, real, img);
    printf("enter real and img values for B\n");
    scanf("%lf, %lf", &real,&img);
    read_comp(&B, real, img);
    printf("\nA value:\n");
    print_comp(A);
    printf("\nB value:\n");
    print_comp(B);
    printf("\nA+B value:\n");
    add_comp(A,B);

    return 0;
}
