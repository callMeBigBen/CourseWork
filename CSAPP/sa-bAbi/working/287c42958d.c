#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_3;              // Tag.BODY
    entity_3 = new int(rand()); // Tag.BODY
    int entity_1;               // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    *entity_2 = entity_1;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER