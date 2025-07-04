#include <stdio.h>
#include <limits.h>   // For integer type limits
#include <float.h>    // For floating-point type limits

int main() {
    printf("--------------------------------------------------\n");
    printf("              INTEGER TYPE LIMITS\n");
    printf("--------------------------------------------------\n");
    printf("CHAR_MIN      : %d\n", CHAR_MIN);
    printf("CHAR_MAX      : %d\n", CHAR_MAX);
    printf("SCHAR_MIN     : %d\n", SCHAR_MIN);
    printf("SCHAR_MAX     : %d\n", SCHAR_MAX);
    printf("UCHAR_MAX     : %u\n", UCHAR_MAX);
    printf("SHRT_MIN      : %d\n", SHRT_MIN);
    printf("SHRT_MAX      : %d\n", SHRT_MAX);
    printf("USHRT_MAX     : %u\n", USHRT_MAX);
    printf("INT_MIN       : %d\n", INT_MIN);
    printf("INT_MAX       : %d\n", INT_MAX);
    printf("UINT_MAX      : %u\n", UINT_MAX);
    printf("LONG_MIN      : %ld\n", LONG_MIN);
    printf("LONG_MAX      : %ld\n", LONG_MAX);
    printf("ULONG_MAX     : %lu\n", ULONG_MAX);
    printf("LLONG_MIN     : %lld\n", LLONG_MIN);
    printf("LLONG_MAX     : %lld\n", LLONG_MAX);
    printf("ULLONG_MAX    : %llu\n", ULLONG_MAX);

    printf("\n--------------------------------------------------\n");
    printf("              FLOATING-POINT TYPE LIMITS\n");
    printf("--------------------------------------------------\n");
    printf("FLT_MIN       : %e\n", FLT_MIN);
    printf("FLT_MAX       : %e\n", FLT_MAX);
    printf("FLT_DIG       : %d\n", FLT_DIG);
    printf("DBL_MIN       : %e\n", DBL_MIN);
    printf("DBL_MAX       : %e\n", DBL_MAX);
    printf("DBL_DIG       : %d\n", DBL_DIG);
    printf("LDBL_MIN      : %Le\n", LDBL_MIN);
    printf("LDBL_MAX      : %Le\n", LDBL_MAX);
    printf("LDBL_DIG      : %d\n", LDBL_DIG);

    return 0;
}
