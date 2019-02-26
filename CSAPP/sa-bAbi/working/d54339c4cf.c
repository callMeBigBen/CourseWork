#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_1;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1 = new int(rand()); // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    *entity_1 = entity_5;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER