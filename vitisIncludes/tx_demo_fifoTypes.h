#ifndef TX_DEMO_FIFOTYPES_H
#define TX_DEMO_FIFOTYPES_H
#include <stdint.h>
#include <stdbool.h>
#include "vitisTypes.h"
typedef struct {
uint8_t port0_real[8];
} PartitionCrossingFIFO_N2_TO_1_0_n69_t;
typedef struct {
uint8_t port0_real[8];
} PartitionCrossingFIFO_N2_TO_1_1_n70_t;
typedef struct {
vitisBool_t port0_real[8];
} PartitionCrossingFIFO_N2_TO_1_2_n71_t;
typedef struct {
float port0_real[32];
float port0_imag[32];
} PartitionCrossingFIFO_1_TO_2_0_n72_t;
typedef struct {
float port0_real[32];
float port0_imag[32];
} PartitionCrossingFIFO_2_TO_N2_0_n73_t;
#endif
