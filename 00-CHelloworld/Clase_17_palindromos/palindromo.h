/*

Guardas :

ifndef --> chequea si esta definido/
define --> si no esta definido, lo define.


EVITA QUE SE REDEFINAN (ya que los .h pueden utilizarse en varios llamados).
*/

#ifndef __PALINDROMO_H__
#define __PALINDROMO_H__

int es_palindromo(const char *cadena);

#endif

// Voy a mi archivo de testeo.