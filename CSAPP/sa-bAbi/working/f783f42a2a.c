#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_3;              // Tag.BODY
    int* entity_5;              // Tag.BODY
    entity_3 = new int(rand()); // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    *entity_3 = entity_8;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER