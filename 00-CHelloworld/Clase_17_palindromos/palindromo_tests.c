#include <assert.h>
// Los headers files dentro de un mismo proyecto se llaman con "" (comillas)
#include "palindromo.h"

int main(void)
{
    assert(es_palindromo("aba") == 1);

    return 0;
}
