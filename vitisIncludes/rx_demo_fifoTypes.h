#ifndef RX_DEMO_FIFOTYPES_H
#define RX_DEMO_FIFOTYPES_H
#include <stdint.h>
#include <stdbool.h>
#include "vitisTypes.h"
typedef struct {
float port0_real[32];
float port0_imag[32];
} PartitionCrossingFIFO_N2_TO_1_0_n6708_t;
typedef struct {
float port0_real[32];
float port0_imag[32];
} PartitionCrossingFIFO_1_TO_2_0_n6709_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_1_TO_2_1_n6710_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_1_TO_2_2_n6711_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_1_TO_2_3_n6712_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_1_TO_2_4_n6713_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_1_TO_2_5_n6714_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_1_TO_2_6_n6715_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_N2_0_n6716_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_3_0_n6717_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_3_1_n6718_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_2_TO_3_2_n6719_t;
typedef struct {
uint8_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_0_n6720_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_1_n6721_t;
typedef struct {
uint8_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_2_n6722_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_3_n6723_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_4_n6724_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_5_n6725_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_6_n6726_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_7_n6727_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_8_n6728_t;
typedef struct {
float port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_9_n6729_t;
typedef struct {
int32_t port0_real[32];
} PartitionCrossingFIFO_3_TO_N2_10_n6730_t;
typedef struct {
vitisBool_t port0_real[32];
} PartitionCrossingFIFO_3_TO_2_0_n6731_t;
#endif
