#include <iostream>
using namespace std;
#include <string.h>
#include "lib.h"

int main(){
char a[10][20], b[20];
for (int i=0; i<10; i++) {
cin >> a[i];
}
cin >> b[0];
for(int e=0; e<10; e++) {
a[e][20]=='\0';
}
if ( ver (a, b) == -1) {
cout << "non presente";
} else {
cout << ver(a, b);
}
return 0;
}
