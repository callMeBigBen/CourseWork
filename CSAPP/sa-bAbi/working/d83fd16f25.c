#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_8;              // Tag.BODY
    int* entity_0;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_0 = new int(rand()); // Tag.BODY
    *entity_0 = entity_5;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER