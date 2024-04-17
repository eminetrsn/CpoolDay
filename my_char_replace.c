void print_number(int value);
void print_char(char c);

int mystrLen( char *chaine)
{
    int cpt = 0;
    while (chaine[cpt] != '\0')
    {
        cpt += 1;

    }
    return cpt;
}
char *my_char_replace(char *origin, char toFind, char toReplace)
{ 
    for (int i = 0 ; i <= mystrLen(origin) ; ++i)
    {
        if (origin[i] == toFind)
        {
            origin[i] = toReplace;
        }
    }
    return origin;
}


