#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int* entity_0;              // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_0 = new int(rand()); // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    *entity_3 = entity_8;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER