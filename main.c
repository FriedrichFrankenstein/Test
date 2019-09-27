#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "resource.h"
#include "data.h"

int main()
{
    sayHallo();
    printf ( "\nresult = %i", count ( 5, 6 ) );
    printResult(getDiff(5, 5));
    getch();
    return 0;
}
