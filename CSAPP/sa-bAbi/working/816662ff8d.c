#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_2;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int* entity_4;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_4 = new int(rand()); // Tag.BODY
    *entity_4 = entity_8;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER