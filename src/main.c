#include <stdio.h>
#include "dummy.h"


int main(int argc, char const *argv[])
{
    int a, b, result;
    
    printf("Entrer deux nombres (séparés par un espace): ");
    scanf("%d %d", &a, &b);

    result = additionner(a, b);
    printf("La somme est égale à %d", result);

    return 0;
}
