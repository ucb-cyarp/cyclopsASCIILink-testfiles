#ifndef RX_DEMO_IO_LINUX_PIPE_H
#define RX_DEMO_IO_LINUX_PIPE_H
#include "rx_demo_fifoTypes.h"
#include "vitisTypes.h"
#include <math.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef struct {
//Input FIFOs
_Atomic int8_t *PartitionCrossingFIFO_11_TO_N2_0_n1253_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_11_TO_N2_0_n1253_writeOffsetPtr_re;
PartitionCrossingFIFO_11_TO_N2_0_n1253_t* PartitionCrossingFIFO_11_TO_N2_0_n1253_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_0_n1257_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_0_n1257_writeOffsetPtr_re;
PartitionCrossingFIFO_12_TO_N2_0_n1257_t* PartitionCrossingFIFO_12_TO_N2_0_n1257_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_1_n1258_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_1_n1258_writeOffsetPtr_re;
PartitionCrossingFIFO_12_TO_N2_1_n1258_t* PartitionCrossingFIFO_12_TO_N2_1_n1258_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_2_n1259_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_2_n1259_writeOffsetPtr_re;
PartitionCrossingFIFO_12_TO_N2_2_n1259_t* PartitionCrossingFIFO_12_TO_N2_2_n1259_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_3_n1260_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_3_n1260_writeOffsetPtr_re;
PartitionCrossingFIFO_12_TO_N2_3_n1260_t* PartitionCrossingFIFO_12_TO_N2_3_n1260_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_4_n1261_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_12_TO_N2_4_n1261_writeOffsetPtr_re;
PartitionCrossingFIFO_12_TO_N2_4_n1261_t* PartitionCrossingFIFO_12_TO_N2_4_n1261_arrayPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_13_TO_N2_0_n1262_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_13_TO_N2_0_n1262_writeOffsetPtr_re;
PartitionCrossingFIFO_13_TO_N2_0_n1262_t* PartitionCrossingFIFO_13_TO_N2_0_n1262_arrayPtr_re;
//Output FIFOs
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_0_n1220_readOffsetPtr_re;
_Atomic int8_t *PartitionCrossingFIFO_N2_TO_1_0_n1220_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_0_n1220_t* PartitionCrossingFIFO_N2_TO_1_0_n1220_arrayPtr_re;
} rx_demo_partitionN2_threadArgs_t;


void* rx_demo_io_linux_pipe_thread(void *args);

#define RX_DEMO_INPUT_BUNDLE1_BLOCKSIZE (32)
#pragma pack(push, 4)
typedef struct {
	float samplesIn_BUNDLE_1_inPort0_re[32];
	float samplesIn_BUNDLE_1_inPort0_im[32];
} rx_demo_inputs_bundle_1_t;
#pragma pack(pop)

#define RX_DEMO_OUTPUT_BUNDLE1_BLOCKSIZE (32)
#pragma pack(push, 4)
typedef struct {
	uint8_t dataPacked_BUNDLE_1_outPort0_re[32];
	vitisBool_t dataPackedValid_BUNDLE_1_outPort1_re[32];
	vitisBool_t dataPackedLast_BUNDLE_1_outPort2_re[32];
	float afterTR_BUNDLE_1_outPort3_re[32];
	float afterTR_BUNDLE_1_outPort3_im[32];
	vitisBool_t afterTRValid_BUNDLE_1_outPort4_re[32];
	float constPt_BUNDLE_1_outPort5_re[32];
	float constPt_BUNDLE_1_outPort5_im[32];
	vitisBool_t constPtValid_BUNDLE_1_outPort6_re[32];
} rx_demo_outputs_bundle_1_t;
#pragma pack(pop)

#endif
