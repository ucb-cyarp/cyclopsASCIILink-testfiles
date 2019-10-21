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
uint8_t *PartitionCrossingFIFO_1_TO_N2_0_n1573_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_0_n1573_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_0_n1573_t* PartitionCrossingFIFO_1_TO_N2_0_n1573_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_1_n1574_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_1_n1574_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_1_n1574_t* PartitionCrossingFIFO_1_TO_N2_1_n1574_arrayPtr_re;
//Output FIFOs
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n1569_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n1569_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_0_n1569_t* PartitionCrossingFIFO_N2_TO_1_0_n1569_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_1_n1570_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_1_n1570_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_1_n1570_t* PartitionCrossingFIFO_N2_TO_1_1_n1570_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_2_n1571_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_2_n1571_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_2_n1571_t* PartitionCrossingFIFO_N2_TO_1_2_n1571_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_3_n1572_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_3_n1572_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_3_n1572_t* PartitionCrossingFIFO_N2_TO_1_3_n1572_arrayPtr_re;
} tx_demo_partitionN2_threadArgs_t;


void* tx_demo_io_linux_pipe_thread(void *args);

#pragma pack(push, 4)
typedef struct {
	uint8_t symbol_BUNDLE_1_inPort0_re[16];
	float gain_BUNDLE_1_inPort1_re[16];
	vitisBool_t zero_BUNDLE_1_inPort2_re[16];
	uint8_t ModMode_BUNDLE_1_inPort3_re[16];
} tx_demo_inputs_bundle_1_t;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct {
	float baseband_i_BUNDLE_2_outPort0_re[16];
	float baseband_q_BUNDLE_2_outPort1_re[16];
} tx_demo_outputs_bundle_2_t;
#pragma pack(pop)

#endif
