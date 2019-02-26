#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int* entity_7;              // Tag.BODY
    int* entity_8;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_7 = new int(rand()); // Tag.BODY
    *entity_8 = entity_5;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER