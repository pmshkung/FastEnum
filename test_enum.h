#ifndef __TEST_ENUM_H__
#define __TEST_ENUM_H__

#include "inc/fast_enum_util.h"

#define TEST_ENUM_VALUE         \
        TEST_START,             \
        TEST_OK_1,              \
        TEST_OK_2,              \
        TEST_OK_3,              \
        TEST_OK_4,              \
        TEST_END

DEFINE_ENUM(TEST_ENUM, TEST_ENUM_VALUE);

#endif /* __TEST_ENUM_H__ */
