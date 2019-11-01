#ifndef TX_DEMO_IO_LINUX_PIPE_H
#define TX_DEMO_IO_LINUX_PIPE_H
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <pthread.h>
#include "vitisTypes.h"
#include "tx_demo_fifoTypes.h"

typedef struct {
//Input FIFOs
uint8_t *PartitionCrossingFIFO_2_TO_N2_0_n1576_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_2_TO_N2_0_n1576_writeOffsetPtr_re;
PartitionCrossingFIFO_2_TO_N2_0_n1576_t* PartitionCrossingFIFO_2_TO_N2_0_n1576_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_2_TO_N2_1_n1577_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_2_TO_N2_1_n1577_writeOffsetPtr_re;
PartitionCrossingFIFO_2_TO_N2_1_n1577_t* PartitionCrossingFIFO_2_TO_N2_1_n1577_arrayPtr_re;
//Output FIFOs
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n1571_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n1571_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_0_n1571_t* PartitionCrossingFIFO_N2_TO_1_0_n1571_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_1_n1572_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_1_n1572_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_1_n1572_t* PartitionCrossingFIFO_N2_TO_1_1_n1572_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_2_n1573_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_2_n1573_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_2_n1573_t* PartitionCrossingFIFO_N2_TO_1_2_n1573_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_2_0_n1574_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_2_0_n1574_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_2_0_n1574_t* PartitionCrossingFIFO_N2_TO_2_0_n1574_arrayPtr_re;
} tx_demo_partitionN2_threadArgs_t;


void* tx_demo_io_linux_pipe_thread(void *args);

#pragma pack(push, 4)
typedef struct {
	uint8_t symbol_BUNDLE_1_inPort0_re[32];
	float gain_BUNDLE_1_inPort1_re[32];
	vitisBool_t zero_BUNDLE_1_inPort2_re[32];
	uint8_t ModMode_BUNDLE_1_inPort3_re[32];
} tx_demo_inputs_bundle_1_t;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct {
	float baseband_i_BUNDLE_2_outPort0_re[32];
	float baseband_q_BUNDLE_2_outPort1_re[32];
} tx_demo_outputs_bundle_2_t;
#pragma pack(pop)

#endif
