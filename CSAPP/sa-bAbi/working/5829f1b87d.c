#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    int* entity_4;              // Tag.BODY
    entity_4 = new int(rand()); // Tag.BODY
    int* entity_5;              // Tag.BODY
    *entity_4 = entity_1;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER