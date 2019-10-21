#ifndef TRANSMITTER_MAN_PARTITION_FIFOTYPES_H
#define TRANSMITTER_MAN_PARTITION_FIFOTYPES_H
#include <stdint.h>
#include <stdbool.h>
#include "vitisTypes.h"
typedef struct {
uint8_t port0_real;
} PartitionCrossingFIFO_N2_TO_1_0_n1569_t;
typedef struct {
float port0_real;
} PartitionCrossingFIFO_N2_TO_1_1_n1570_t;
typedef struct {
vitisBool_t port0_real;
} PartitionCrossingFIFO_N2_TO_1_2_n1571_t;
typedef struct {
uint8_t port0_real;
} PartitionCrossingFIFO_N2_TO_1_3_n1572_t;
typedef struct {
float port0_real;
} PartitionCrossingFIFO_1_TO_N2_0_n1573_t;
typedef struct {
float port0_real;
} PartitionCrossingFIFO_1_TO_N2_1_n1574_t;
#endif
