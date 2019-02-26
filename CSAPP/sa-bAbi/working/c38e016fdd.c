#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    int* entity_7;              // Tag.BODY
    entity_7 = new int(rand()); // Tag.BODY
    int* entity_6;              // Tag.BODY
    *entity_7 = entity_3;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER