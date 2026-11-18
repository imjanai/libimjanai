#include "imjanai.h"
#include <math.h>

imj_status imj_current(
    double voltage,
    double resistance,
    double *result
) {
    if (!result || !isfinite(voltage) ||
        !isfinite(resistance) || resistance <= 0.0)
        return IMJ_ERROR_INVALID_ARGUMENT;

    double value = voltage / resistance;
    if (!isfinite(value))
        return IMJ_ERROR_INVALID_ARGUMENT;

    *result = value;
    return IMJ_OK;
}

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

const char *imj_version(void) {
    return "0.1.0";
}
