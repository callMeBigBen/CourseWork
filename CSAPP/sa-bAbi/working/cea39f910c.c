#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int* entity_0;              // Tag.BODY
    entity_3 = new int(rand()); // Tag.BODY
    *entity_0 = entity_7;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER