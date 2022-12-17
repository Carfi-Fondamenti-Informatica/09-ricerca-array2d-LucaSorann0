#include "lib.h"
#include <string.h>
int ver (char lista[10][20],char nome[20]) {
for (int k=0; k<10; k++) {
if (strcmp (lista[k], nome) == 0) {
return k;
}
}
return -1;
}
