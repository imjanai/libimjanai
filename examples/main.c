#include <stdio.h>
#include "imjanai.h"

int main(void) {
    double current, power;

    if (imj_current(230.0, 46.0, &current) != IMJ_OK)
        return 1;

    if (imj_power(230.0, current, &power) != IMJ_OK)
        return 1;

    printf("Imjanai v%s\n", imj_version());
    printf("Current: %.2f A\n", current);
    printf("Power: %.2f W\n", power);

    return 0;
}
