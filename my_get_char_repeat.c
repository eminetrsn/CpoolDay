#include <stdio.h>

int mystrLen( char *chaine)
{
    int cpt = 0;
    while (chaine[cpt] != '\0')
    {
        cpt += 1;

    }
    return cpt;
}

int my_get_char_repeat(char to_find, const char *to_search)
{
    int cpt = 0;
    for (int i = 0 ; i <= mystrLen(to_search) ; ++i)
    {
        if (to_search[i] == to_find) 
        {
            cpt += 1;
        }
    return cpt;
    }
}
