
#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQUARE(x) ((x) * (x))
#define SQR(x) ((x) * (x))

#define CALCULATE_W(x, z) \
    (((z) > 5 && (z) < 10) ? \
        (MAX((x), (z)) * MIN((x) + (z), (x) * (z))) : \
    ((z) <= 5 || (z) >= 10) ? \
        (SQUARE(MIN(ABS((x) - (z)), (z)))) : \
        0)

#define PRINT_INT(value) printf(#value " = %d\n", (value))

#define PRINT_FLOAT(value) printf(#value " = %.2f\n", (float)(value))

#endif 
