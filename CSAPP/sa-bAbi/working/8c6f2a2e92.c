#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_6;              // Tag.BODY
    int entity_7;               // Tag.BODY
    int* entity_1;              // Tag.BODY
    entity_1 = new int(rand()); // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    *entity_6 = entity_7;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER