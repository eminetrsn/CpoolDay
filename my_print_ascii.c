void print_char(char c)
{
    write(1, &c, 1);
}

void my_print_ascii(void)
{
    for (int i = 0; i <128 ; ++i)
    {
    print_char(i);
    }
}

int main(void)
 {
 my_print_ascii();
 return 0;
 }




