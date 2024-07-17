#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch=1;

    switch (ch)
    {
    case 0:
        printf("\nzero");
    case 1:
        printf("\none");
    case 2:
        printf("\ntwo");
    case 3:
        printf("\nthree");
    }

    return 0;
}
