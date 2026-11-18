#include "imjanai.h"
#include <math.h>

imj_status imj_power(
    double voltage,
    double current,
    double *result
) {
    if (!result || !isfinite(voltage) ||
        !isfinite(current))
        return IMJ_ERROR_INVALID_ARGUMENT;

    double value = voltage * current;
    if (!isfinite(value))
        return IMJ_ERROR_INVALID_ARGUMENT;

    *result = value;
    return IMJ_OK;
}
