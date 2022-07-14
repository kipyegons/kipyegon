/*
project;simple calculator
author;kipyegon siele
compiler;c89
date;july 2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration'
    float num1,num2,sum,difference,product,quotient;

    printf("tCalculator!\n");
    //input
    printf("enter two numbers:");
    scanf("%f%f",&num1,&num2);
    //computation
    //arithmetic operation:= = " / + + = = %
    sum = num1 + num2;
    difference = num1-num2;
    product = num1 * num2;
    quotient =num1 / num2;
    //output
    //20+30=50
    printf("&8.2f + &8.2f" ,num1,num2,sum);

    printf("&8.2f - &8.2f", num1,num2,difference);

    printf("&8.2f * &8.2f", num1,num2,product);

    printf("&8.2f / &8.2f",num1,num2,quotient);
    return 0;

}
