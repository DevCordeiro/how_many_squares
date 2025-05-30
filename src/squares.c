/*
    Code to calculate how many squares we see using the equantion n*(n+1)*(2*n + 1)/6
    
    Author: Anderson Cordeiro de Souza
    Date: May 5 of 2025
*/

#include "squares.h"

int count_squares(int n) 
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}