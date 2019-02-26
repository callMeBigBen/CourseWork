#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_3;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_2 = new int(rand()); // Tag.BODY
    *entity_2 = entity_5;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER