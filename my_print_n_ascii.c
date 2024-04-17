void print_char(char c)
{
    write(1, &c, 1);
}

void my_print_n_ascii(int howMany)
{
        if (33 < howMany <= 128 )
        {
        
            for (int i = 33; i <= howMany; ++i)
            {
                print_char(i);

            }
        }
}
