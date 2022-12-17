#include "lib.h"
#include <string.h>
int ver (const char lista[10][20],const char nome[20]) {
for (int k=0; k<10; k++) {
if (strcmp (lista[k], nome) == 0) {
return k;
}
}
return -1;
}
