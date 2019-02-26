#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_1;              // Tag.BODY
    int entity_4;               // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_1 = new int(rand()); // Tag.BODY
    *entity_2 = entity_4;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER