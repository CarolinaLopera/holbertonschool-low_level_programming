 #include <stdio.h>
 char *_print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        char *rev[5];
        *rev = s;
        s--;
        *rev--;
        _print_rev_recursion(s);
    }
    if (*s != '\0')
    {
        _print_rev_recursion(s + 1);
        return(s);
    }
}
 
int main(void)
{
    char *str = "Caro";
    _print_rev_recursion(str);
    printf("%s", str);
    return (0);
}
