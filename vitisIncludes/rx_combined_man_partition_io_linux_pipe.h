#ifndef RX_COMBINED_MAN_PARTITION_IO_LINUX_PIPE_H
#define RX_COMBINED_MAN_PARTITION_IO_LINUX_PIPE_H
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <pthread.h>
#include "vitisTypes.h"
#include "rx_combined_man_partition_fifoTypes.h"

typedef struct {
//Input FIFOs
uint8_t *PartitionCrossingFIFO_1_TO_N2_0_n4822_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_0_n4822_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_0_n4822_t* PartitionCrossingFIFO_1_TO_N2_0_n4822_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_1_n4823_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_1_n4823_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_1_n4823_t* PartitionCrossingFIFO_1_TO_N2_1_n4823_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_2_n4824_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_2_n4824_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_2_n4824_t* PartitionCrossingFIFO_1_TO_N2_2_n4824_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_3_n4825_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_3_n4825_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_3_n4825_t* PartitionCrossingFIFO_1_TO_N2_3_n4825_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_4_n4826_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_4_n4826_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_4_n4826_t* PartitionCrossingFIFO_1_TO_N2_4_n4826_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_5_n4827_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_5_n4827_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_5_n4827_t* PartitionCrossingFIFO_1_TO_N2_5_n4827_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_6_n4828_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_6_n4828_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_6_n4828_t* PartitionCrossingFIFO_1_TO_N2_6_n4828_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_7_n4829_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_7_n4829_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_7_n4829_t* PartitionCrossingFIFO_1_TO_N2_7_n4829_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_8_n4830_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_8_n4830_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_8_n4830_t* PartitionCrossingFIFO_1_TO_N2_8_n4830_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_9_n4831_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_9_n4831_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_9_n4831_t* PartitionCrossingFIFO_1_TO_N2_9_n4831_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_10_n4832_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_10_n4832_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_10_n4832_t* PartitionCrossingFIFO_1_TO_N2_10_n4832_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_11_n4833_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_11_n4833_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_11_n4833_t* PartitionCrossingFIFO_1_TO_N2_11_n4833_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_12_n4834_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_12_n4834_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_12_n4834_t* PartitionCrossingFIFO_1_TO_N2_12_n4834_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_13_n4835_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_13_n4835_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_13_n4835_t* PartitionCrossingFIFO_1_TO_N2_13_n4835_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_14_n4836_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_14_n4836_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_14_n4836_t* PartitionCrossingFIFO_1_TO_N2_14_n4836_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_15_n4837_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_15_n4837_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_15_n4837_t* PartitionCrossingFIFO_1_TO_N2_15_n4837_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_16_n4838_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_16_n4838_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_16_n4838_t* PartitionCrossingFIFO_1_TO_N2_16_n4838_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_17_n4839_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_17_n4839_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_17_n4839_t* PartitionCrossingFIFO_1_TO_N2_17_n4839_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_18_n4840_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_18_n4840_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_18_n4840_t* PartitionCrossingFIFO_1_TO_N2_18_n4840_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_19_n4841_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_19_n4841_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_19_n4841_t* PartitionCrossingFIFO_1_TO_N2_19_n4841_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_20_n4842_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_20_n4842_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_20_n4842_t* PartitionCrossingFIFO_1_TO_N2_20_n4842_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_21_n4843_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_21_n4843_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_21_n4843_t* PartitionCrossingFIFO_1_TO_N2_21_n4843_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_22_n4844_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_22_n4844_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_22_n4844_t* PartitionCrossingFIFO_1_TO_N2_22_n4844_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_23_n4845_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_23_n4845_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_23_n4845_t* PartitionCrossingFIFO_1_TO_N2_23_n4845_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_24_n4846_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_24_n4846_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_24_n4846_t* PartitionCrossingFIFO_1_TO_N2_24_n4846_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_25_n4847_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_25_n4847_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_25_n4847_t* PartitionCrossingFIFO_1_TO_N2_25_n4847_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_26_n4848_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_26_n4848_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_26_n4848_t* PartitionCrossingFIFO_1_TO_N2_26_n4848_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_27_n4849_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_27_n4849_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_27_n4849_t* PartitionCrossingFIFO_1_TO_N2_27_n4849_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_28_n4850_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_28_n4850_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_28_n4850_t* PartitionCrossingFIFO_1_TO_N2_28_n4850_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_29_n4851_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_29_n4851_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_29_n4851_t* PartitionCrossingFIFO_1_TO_N2_29_n4851_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_30_n4852_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_30_n4852_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_30_n4852_t* PartitionCrossingFIFO_1_TO_N2_30_n4852_arrayPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_31_n4853_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_1_TO_N2_31_n4853_writeOffsetPtr_re;
PartitionCrossingFIFO_1_TO_N2_31_n4853_t* PartitionCrossingFIFO_1_TO_N2_31_n4853_arrayPtr_re;
//Output FIFOs
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n4821_readOffsetPtr_re;
uint8_t *PartitionCrossingFIFO_N2_TO_1_0_n4821_writeOffsetPtr_re;
PartitionCrossingFIFO_N2_TO_1_0_n4821_t* PartitionCrossingFIFO_N2_TO_1_0_n4821_arrayPtr_re;
} rx_combined_man_partition_partitionN2_threadArgs_t;


void* rx_combined_man_partition_io_linux_pipe_thread(void *args);

#pragma pack(push, 4)
typedef struct {
	float In1_BUNDLE_1_inPort0_re;
	float In1_BUNDLE_1_inPort0_im;
} rx_combined_man_partition_inputs_bundle_1_t;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct {
	float rawI_BUNDLE_2_outPort0_re;
	float rawQ_BUNDLE_2_outPort1_re;
	float timingDelay_BUNDLE_2_outPort2_re;
	float agcCorrection_BUNDLE_2_outPort3_re;
	float after_agc_I_BUNDLE_2_outPort4_re;
	float after_agc_Q_BUNDLE_2_outPort5_re;
	vitisBool_t strobe_BUNDLE_2_outPort6_re;
	float ca_BUNDLE_2_outPort7_re;
	float cb_BUNDLE_2_outPort8_re;
	vitisBool_t stf_BUNDLE_2_outPort9_re;
	vitisBool_t cef_BUNDLE_2_outPort10_re;
	vitisBool_t preambleDone_upsample_BUNDLE_2_outPort11_re;
	vitisBool_t ack_BUNDLE_2_outPort12_re;
	vitisBool_t failed_BUNDLE_2_outPort13_re;
	vitisBool_t valid_BUNDLE_2_outPort14_re;
	uint8_t symbols_BUNDLE_2_outPort15_re;
	vitisBool_t last_BUNDLE_2_outPort16_re;
	float cumulativeCarrierPhase_BUNDLE_2_outPort17_re;
	float after_cr_BUNDLE_2_outPort18_re;
	float after_cr_BUNDLE_2_outPort18_im;
	float eq_ff_lms_err_BUNDLE_2_outPort19_re;
	float eq_ff_lms_err_BUNDLE_2_outPort19_im;
	vitisBool_t crc_err_BUNDLE_2_outPort20_re;
	uint8_t agc_dst_BUNDLE_2_outPort21_re;
	vitisBool_t agc_trigger_BUNDLE_2_outPort22_re;
	uint8_t rx_channel_BUNDLE_2_outPort23_re;
	vitisBool_t packed_valid_BUNDLE_2_outPort24_re;
	uint8_t packed_symbol_BUNDLE_2_outPort25_re;
	vitisBool_t ack_this_BUNDLE_2_outPort26_re;
	float coarse_cfo_correct_steps_BUNDLE_2_outPort27_re;
	vitisBool_t packed_last_BUNDLE_2_outPort28_re;
} rx_combined_man_partition_outputs_bundle_2_t;
#pragma pack(pop)

#endif
