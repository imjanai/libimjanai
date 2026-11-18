
#ifndef IMJANAI_H
#define IMJANAI_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    IMJ_OK = 0,
    IMJ_ERROR_INVALID_ARGUMENT
} imj_status;

imj_status imj_current(
    double voltage,
    double resistance,
    double *result
);

imj_status imj_power(
    double voltage,
    double current,
    double *result
);

const char *imj_version(void);

#ifdef __cplusplus
}
#endif

#endif
