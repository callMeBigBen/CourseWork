#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_2 = new int(rand()); // Tag.BODY
    int* entity_0;              // Tag.BODY
    *entity_2 = entity_6;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER