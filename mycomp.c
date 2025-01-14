#include <stdio.h>

int main()
{
    double real, img;
    complex A,B,C,D,E,F = {0,0};
    char *input = NULL;
    char *temp = NULL;
    size_t size = 30;
    size_t length = 0;
    char current_input_character;
    
    input = malloc(size * sizeof(char));
    if (input == NULL) { 
        perror("Unable to allocate memory");
        return 1;
    }
    
    printf("enter a command");
    while (current_input_character != '\n' && current_input_character != EOF) { /* Read characters one by one */
        input[length++] = current_input_character;
        /* If we've reached the end of the buffer, resize it */
        if (length >= size) {
            size *= 2; /* Double the buffer size */
            temp = realloc(input, size * sizeof(char)); /* Use a temporary pointer to handle realloc */
            if (temp == NULL) { /* realloc fails */
                perror("unable to reallocating memory");
                return 1;
            }
            input = temp;
        }
    }
    input[length] = '\0'; /* Null-terminate the string */
    printf("\nthe command you entered:\n%s\n", input);

    return 0;
}

/*************************************************
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
    printf("\nA absolute value:\n");
    abs_comp(A);  */
