#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int* entity_9;              // Tag.BODY
    int* entity_6;              // Tag.BODY
    entity_9 = new int(rand()); // Tag.BODY
    *entity_9 = entity_2;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER