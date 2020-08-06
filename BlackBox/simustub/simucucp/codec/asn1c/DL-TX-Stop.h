/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DL_TX_Stop_H_
#define	_DL_TX_Stop_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TX_Stop {
	DL_TX_Stop_stop	= 0,
	DL_TX_Stop_resume	= 1
	/*
	 * Enumeration is extensible
	 */
} e_DL_TX_Stop;

/* DL-TX-Stop */
typedef long	 DL_TX_Stop_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DL_TX_Stop_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DL_TX_Stop;
extern const asn_INTEGER_specifics_t asn_SPC_DL_TX_Stop_specs_1;
asn_struct_free_f DL_TX_Stop_free;
asn_struct_print_f DL_TX_Stop_print;
asn_constr_check_f DL_TX_Stop_constraint;
ber_type_decoder_f DL_TX_Stop_decode_ber;
der_type_encoder_f DL_TX_Stop_encode_der;
xer_type_decoder_f DL_TX_Stop_decode_xer;
xer_type_encoder_f DL_TX_Stop_encode_xer;
oer_type_decoder_f DL_TX_Stop_decode_oer;
oer_type_encoder_f DL_TX_Stop_encode_oer;
per_type_decoder_f DL_TX_Stop_decode_uper;
per_type_encoder_f DL_TX_Stop_encode_uper;
per_type_decoder_f DL_TX_Stop_decode_aper;
per_type_encoder_f DL_TX_Stop_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TX_Stop_H_ */
#include <asn_internal.h>