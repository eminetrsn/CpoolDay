
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

void my_print_revert(char *toRevert)
{

    for (int i = mystrLen(toRevert) ; i >= 0 ; --i)
    {
        print_char(toRevert[i]);
    }
}
