/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _TX_RATE_STATS_INFO_H_
#define _TX_RATE_STATS_INFO_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	tx_rate_stats_info_valid[0], transmit_bw[2:1], transmit_pkt_type[6:3], transmit_stbc[7], transmit_ldpc[8], transmit_sgi[10:9], transmit_mcs[14:11], ofdma_transmission[15], tones_in_ru[27:16], reserved_0a[31:28]
//	1	ppdu_transmission_tsf[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_TX_RATE_STATS_INFO 2

struct tx_rate_stats_info {
             uint32_t tx_rate_stats_info_valid        :  1, //[0]
                      transmit_bw                     :  2, //[2:1]
                      transmit_pkt_type               :  4, //[6:3]
                      transmit_stbc                   :  1, //[7]
                      transmit_ldpc                   :  1, //[8]
                      transmit_sgi                    :  2, //[10:9]
                      transmit_mcs                    :  4, //[14:11]
                      ofdma_transmission              :  1, //[15]
                      tones_in_ru                     : 12, //[27:16]
                      reserved_0a                     :  4; //[31:28]
             uint32_t ppdu_transmission_tsf           : 32; //[31:0]
};

/*

tx_rate_stats_info_valid
			
			When set all other fields in this STRUCT contain valid
			info.
			
			
			
			
			<legal all>

transmit_bw
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Indicates the BW of the upcoming transmission that shall
			likely start in about 3 -4 us on the medium
			
			
			
			<enum 0 transmit_bw_20_MHz>
			
			<enum 1 transmit_bw_40_MHz>
			
			<enum 2 transmit_bw_80_MHz>
			
			<enum 3 transmit_bw_160_MHz>
			
			
			
			<legal all>

transmit_pkt_type
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The packet type
			
			<enum 0 dot11a>802.11a PPDU type
			
			<enum 1 dot11b>802.11b PPDU type
			
			<enum 2 dot11n_mm>802.11n Mixed Mode PPDU type
			
			<enum 3 dot11ac>802.11ac PPDU type
			
			<enum 4 dot11ax>802.11ax PPDU type
			
			<enum 5 dot11ba>802.11ba (WUR) PPDU type

transmit_stbc
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, STBC transmission rate was used.

transmit_ldpc
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, use LDPC transmission rates

transmit_sgi
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			<enum 0     0_8_us_sgi > Legacy normal GI. Can also be
			used for HE
			
			<enum 1     0_4_us_sgi > Legacy short GI. Can also be
			used for HE
			
			<enum 2     1_6_us_sgi > HE related GI
			
			<enum 3     3_2_us_sgi > HE related GI
			
			<legal 0 - 3>

transmit_mcs
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			For details, refer to  MCS_TYPE description
			
			<legal all>

ofdma_transmission
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			
			
			Set when the transmission was an OFDMA transmission (DL
			or UL).
			
			<legal all>

tones_in_ru
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The number of tones in the RU used.
			
			<legal all>

reserved_0a
			
			<legal 0>

ppdu_transmission_tsf
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Based on a HWSCH configuration register setting, this
			field either contains:
			
			
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame finished.
			
			OR
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame started
			
			
			
			<legal all>
*/


/* Description		TX_RATE_STATS_INFO_0_TX_RATE_STATS_INFO_VALID
			
			When set all other fields in this STRUCT contain valid
			info.
			
			
			
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_0_TX_RATE_STATS_INFO_VALID_OFFSET         0x00000000
#define TX_RATE_STATS_INFO_0_TX_RATE_STATS_INFO_VALID_LSB            0
#define TX_RATE_STATS_INFO_0_TX_RATE_STATS_INFO_VALID_MASK           0x00000001

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_BW
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Indicates the BW of the upcoming transmission that shall
			likely start in about 3 -4 us on the medium
			
			
			
			<enum 0 transmit_bw_20_MHz>
			
			<enum 1 transmit_bw_40_MHz>
			
			<enum 2 transmit_bw_80_MHz>
			
			<enum 3 transmit_bw_160_MHz>
			
			
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_BW_OFFSET                      0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_BW_LSB                         1
#define TX_RATE_STATS_INFO_0_TRANSMIT_BW_MASK                        0x00000006

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_PKT_TYPE
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The packet type
			
			<enum 0 dot11a>802.11a PPDU type
			
			<enum 1 dot11b>802.11b PPDU type
			
			<enum 2 dot11n_mm>802.11n Mixed Mode PPDU type
			
			<enum 3 dot11ac>802.11ac PPDU type
			
			<enum 4 dot11ax>802.11ax PPDU type
			
			<enum 5 dot11ba>802.11ba (WUR) PPDU type
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_PKT_TYPE_OFFSET                0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_PKT_TYPE_LSB                   3
#define TX_RATE_STATS_INFO_0_TRANSMIT_PKT_TYPE_MASK                  0x00000078

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_STBC
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, STBC transmission rate was used.
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_STBC_OFFSET                    0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_STBC_LSB                       7
#define TX_RATE_STATS_INFO_0_TRANSMIT_STBC_MASK                      0x00000080

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_LDPC
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, use LDPC transmission rates
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_LDPC_OFFSET                    0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_LDPC_LSB                       8
#define TX_RATE_STATS_INFO_0_TRANSMIT_LDPC_MASK                      0x00000100

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_SGI
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			<enum 0     0_8_us_sgi > Legacy normal GI. Can also be
			used for HE
			
			<enum 1     0_4_us_sgi > Legacy short GI. Can also be
			used for HE
			
			<enum 2     1_6_us_sgi > HE related GI
			
			<enum 3     3_2_us_sgi > HE related GI
			
			<legal 0 - 3>
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_SGI_OFFSET                     0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_SGI_LSB                        9
#define TX_RATE_STATS_INFO_0_TRANSMIT_SGI_MASK                       0x00000600

/* Description		TX_RATE_STATS_INFO_0_TRANSMIT_MCS
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			For details, refer to  MCS_TYPE description
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_0_TRANSMIT_MCS_OFFSET                     0x00000000
#define TX_RATE_STATS_INFO_0_TRANSMIT_MCS_LSB                        11
#define TX_RATE_STATS_INFO_0_TRANSMIT_MCS_MASK                       0x00007800

/* Description		TX_RATE_STATS_INFO_0_OFDMA_TRANSMISSION
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			
			
			Set when the transmission was an OFDMA transmission (DL
			or UL).
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_0_OFDMA_TRANSMISSION_OFFSET               0x00000000
#define TX_RATE_STATS_INFO_0_OFDMA_TRANSMISSION_LSB                  15
#define TX_RATE_STATS_INFO_0_OFDMA_TRANSMISSION_MASK                 0x00008000

/* Description		TX_RATE_STATS_INFO_0_TONES_IN_RU
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The number of tones in the RU used.
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_0_TONES_IN_RU_OFFSET                      0x00000000
#define TX_RATE_STATS_INFO_0_TONES_IN_RU_LSB                         16
#define TX_RATE_STATS_INFO_0_TONES_IN_RU_MASK                        0x0fff0000

/* Description		TX_RATE_STATS_INFO_0_RESERVED_0A
			
			<legal 0>
*/
#define TX_RATE_STATS_INFO_0_RESERVED_0A_OFFSET                      0x00000000
#define TX_RATE_STATS_INFO_0_RESERVED_0A_LSB                         28
#define TX_RATE_STATS_INFO_0_RESERVED_0A_MASK                        0xf0000000

/* Description		TX_RATE_STATS_INFO_1_PPDU_TRANSMISSION_TSF
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Based on a HWSCH configuration register setting, this
			field either contains:
			
			
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame finished.
			
			OR
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame started
			
			
			
			<legal all>
*/
#define TX_RATE_STATS_INFO_1_PPDU_TRANSMISSION_TSF_OFFSET            0x00000004
#define TX_RATE_STATS_INFO_1_PPDU_TRANSMISSION_TSF_LSB               0
#define TX_RATE_STATS_INFO_1_PPDU_TRANSMISSION_TSF_MASK              0xffffffff


#endif // _TX_RATE_STATS_INFO_H_
