#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int* entity_5;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    int* entity_0;              // Tag.BODY
    entity_5 = new int(rand()); // Tag.BODY
    *entity_5 = entity_6;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER