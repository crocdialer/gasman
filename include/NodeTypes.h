#ifndef _NODE_TYPES_H
#define _NODE_TYPES_H

#include <stdint.h>

#define STRUCT_TYPE_GASMAN 0xF0

typedef struct gasman_t
{
    uint8_t stype = STRUCT_TYPE_GASMAN;

    // battery in range [0 .. 1]
    uint8_t battery = 0;

    // eCO2 (equivalent calculated carbon-dioxide) concentration in range [400 .. 8192] parts per million (ppm)
    uint16_t eco2 = 0;

    // TVOC (total volatile organic compound) concentration in range [0 .. 1187] parts per billion (ppb)
    uint16_t tvoc = 0;

} gasman_t;

#endif
