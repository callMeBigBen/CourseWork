#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_4;              // Tag.BODY
    int* entity_8;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_4 = new int(rand()); // Tag.BODY
    *entity_8 = entity_7;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER