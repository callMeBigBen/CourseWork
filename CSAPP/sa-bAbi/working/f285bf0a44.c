#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_4;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int* entity_6;              // Tag.BODY
    entity_4 = new int(rand()); // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    *entity_4 = entity_3;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER