#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_2;              // Tag.BODY
    entity_2 = new int(rand()); // Tag.BODY
    int entity_0;               // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    *entity_2 = entity_0;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER