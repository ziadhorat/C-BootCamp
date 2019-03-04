void    print_bits(unsigned char octet)
{
    int i;
    char bits[9] = "00000000";

    i = 7;
    while(i >= 0)
    {
        bits[i] = (octet % 2) + '0';
        octet = octet / 2;
        i--;
    }
    bits[8] = '\0';
    ft_putstr(bits);
}
