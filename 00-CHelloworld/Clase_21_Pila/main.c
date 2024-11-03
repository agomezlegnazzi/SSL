/* lo que deberia de hacer mi programa es aceptar si la serie de tokens es correcta, y rechazar en caso de que sea incorrecta.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int reconocer_palabra(const char *cadena)
{
    int estado_actual = 0;
    char PILA[4096] = "$"; // mi pila inicia con el caracter $...
    char *tope = PILA;     // puntero que apunta al tope de mi pila, como esta en "0" apunta a $.

    for (int i = 0; i < strlen(cadena); ++i)
    {
        char token = cadena[i];
        if (token == ' ')
            continue;

        switch (token)
        {
        case '4':
            break;
        case '+':
        case '-':
            break;
        case '(':
            break;
        case ')':
            break;
        }
        if (token == '4')
        {
        }
        else if (token == '+' || token == '*')
            ;
    }

    printf("Estado de la pila : %s\n", PILA);
    printf("Estado : e%d\n", estado_actual);

    /* Condicion de aceptacion TRUE o FALSE*/
    if (estado_actual == 3 && *tope == '$')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *tokens = "4 + 4"; /* serie de tokens de entrada*/
                            /*
                            "4", DIGITO
                            "+", OPERADOR
                            "4", DIGITO
                            */

    if (reconocer_palabra(tokens) == 1)
    {
        printf("%s pertenece al LIC de expersiones", tokens);
    }
    else
    {
        printf("%s NO pertenece al LIC", tokens);
    }

    return 0;
}