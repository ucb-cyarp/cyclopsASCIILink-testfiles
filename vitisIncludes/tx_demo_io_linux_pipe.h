#ifndef TX_DEMO_IO_LINUX_PIPE_H
#define TX_DEMO_IO_LINUX_PIPE_H
#include "tx_demo_fifoTypes.h"
#include "vitisTypes.h"
#include <math.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef struct {
//Input FIFOs
_Atomic int8_t *PartitionCrossingFIFO_2_TO_N2_0_n73_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_2_TO_N2_0_n73_writeOffsetPtr_re;
PartitionCrossingFIFO_2_TO_N2_0_n73_t* PartitionCrossingFIFO_2_TO_N2_0_n73_arrayPtr_re;
//Output FIFOs
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_0_n69_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_0_n69_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_0_n69_t* PartitionCrossingFIFO_N2_TO_1_0_n69_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_1_n70_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_1_n70_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_1_n70_t* PartitionCrossingFIFO_N2_TO_1_1_n70_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_2_n71_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_2_n71_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_2_n71_t* PartitionCrossingFIFO_N2_TO_1_2_n71_arrayPtr_re;
} tx_demo_partitionN2_threadArgs_t;


void* tx_demo_io_linux_pipe_thread(void *args);

#define TX_DEMO_INPUT_BUNDLE1_BLOCKSIZE (8)
#pragma pack(push, 4)
typedef struct {
	uint8_t symbol_BUNDLE_1_inPort0_re[8];
	uint8_t modulation_BUNDLE_1_inPort1_re[8];
	vitisBool_t en_BUNDLE_1_inPort2_re[8];
} tx_demo_inputs_bundle_1_t;
#pragma pack(pop)

#define TX_DEMO_OUTPUT_BUNDLE1_BLOCKSIZE (32)
#pragma pack(push, 4)
typedef struct {
	float samplesOut_BUNDLE_1_outPort0_re[32];
	float samplesOut_BUNDLE_1_outPort0_im[32];
} tx_demo_outputs_bundle_1_t;
#pragma pack(pop)

#endif
