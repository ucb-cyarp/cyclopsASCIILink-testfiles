#ifndef TX_DEMO_FIFOTYPES_H
#define TX_DEMO_FIFOTYPES_H
#include <stdint.h>
#include <stdbool.h>
#include "vitisTypes.h"
typedef struct {
uint8_t port0_real[32];
} PartitionCrossingFIFO_N2_TO_1_0_n1571_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_N2_TO_1_1_n1572_t;
typedef struct {
uint8_t port0_real[32];
} PartitionCrossingFIFO_N2_TO_1_2_n1573_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_N2_TO_2_0_n1574_t;
typedef struct {
float port0_real[32];
float port0_imag[32];
} PartitionCrossingFIFO_1_TO_2_0_n1575_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_N2_0_n1576_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_N2_1_n1577_t;
#endif
