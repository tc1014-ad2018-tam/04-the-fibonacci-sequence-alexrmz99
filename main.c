/*
 * This program will display the user as many numbers as he asks
 * from the Fibonacci sequence.
 *
 * Autor: Alejandro Ramírez Michel
 * Fecha: 3 de septiembre  2018
 * Correo: alex.ramirez.99@hotmail.com
 */

#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 1;
    int n;          // represents the number of terms the user wants
    int next;
    int f;

// in this part we ask the user how many terms he wants
    printf("Hello user! Welcome to the Fibonacci sequence\n");
    printf("How many terms from the Fibonacci sequence do you want?\n");
    scanf("%d", &n);


    printf("The first %d terms of the Fibonacci sequence are:\n", n); //then, according to the "n", the program will print the numbers

    //the loop will start here
    for (f = 0; f <= n; f++) {
        if (f<= 1)
            next = f;
        else {
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }
        printf("> %d\n", next);
    }



    return 0;
}