#include<stdio.h>

int my_absolute(int number)
{
    if (number < 0)
    {
        int positif = number + 2*(-number);
    }
    else
    {
        return number;
    }
}
