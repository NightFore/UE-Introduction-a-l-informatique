#include <stdio.h>

int fonction1(int a, int b);
int fonction2(int d, int c, int b);

int main()
{
    int a=2, b=4, c, d, i;



    a = b; b = a;
    printf("A) %d %d %d %d\n", a, b, c, d);



    a = 3; b = -1; c = a + b;
    for(i=3; i<=6; i++)
    {
        a = a + i;
    }
    printf("B) %d %d %d %d\n", a, b, c, d);



    a = 5; b = 1;
    while(a<15)
    {
        a = a + 5;
        b = b - 2;
    }
    printf("C) %d %d %d %d\n", a, b, c, d);



    a = 3; b = 6; c = 5;
    do
    {
        a = b + a;
        b = b - 2;
        c = a + b;
    } while(b >= 4);
    printf("D) %d %d %d %d\n", a, b, c, d);



    a = 5; b = 10; c = 2; d = 77;
    a = fonction1(a, b);
    printf("E) %d %d %d %d\n", a, b, c, d);



    c = fonction2(8, a, c);
    printf("F) %d %d %d %d\n", a, b, c, d);

    return 0;
}



int fonction1(int a, int b)
{
    int c = 2;
    int d = 5;
    printf("G) %d %d %d %d\n", a, b, c, d);
    a = a + a; b = b + c; c = c / 2;
    printf("H) %d %d %d %d\n", a, b, c, d);
    printf("I) a, b, c, d\n");
    return b;
}



int fonction2(int d, int c, int b)
{
    int a = 2;
    b = 17;
    printf("J) %d %d %d %d\n", a, b, c, d);

    if((c % 2) == 0)
    {
        a = c - 2;
    }

    else
    {
        a = b / c;
    }

    printf("K) %d %d %d %d\n", a, b, c, d);

    return a + b + c;
}
