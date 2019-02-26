#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int* entity_9;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int* entity_6;              // Tag.BODY
    entity_6 = new int(rand()); // Tag.BODY
    *entity_6 = entity_0;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER