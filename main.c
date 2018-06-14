#include <stdio.h>
#include "test_enum.h"

int main(int argc, char *argv[]) {
    TEST_ENUM number;
    
    number = TEST_START;
    printf("%s: %d\n", ENUM_TO_STRING(TEST_ENUM, number), number);
    
    STRING_TO_ENUM("TEST_END", TEST_ENUM, &number);
    printf("%s: %d\n", ENUM_TO_STRING(TEST_ENUM, number), number);
    
    return 0;
}
