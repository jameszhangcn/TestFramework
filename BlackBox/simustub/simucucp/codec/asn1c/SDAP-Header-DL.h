/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_SDAP_Header_DL_H_
#define	_SDAP_Header_DL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SDAP_Header_DL {
	SDAP_Header_DL_present	= 0,
	SDAP_Header_DL_absent	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SDAP_Header_DL;

/* SDAP-Header-DL */
typedef long	 SDAP_Header_DL_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SDAP_Header_DL_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SDAP_Header_DL;
extern const asn_INTEGER_specifics_t asn_SPC_SDAP_Header_DL_specs_1;
asn_struct_free_f SDAP_Header_DL_free;
asn_struct_print_f SDAP_Header_DL_print;
asn_constr_check_f SDAP_Header_DL_constraint;
ber_type_decoder_f SDAP_Header_DL_decode_ber;
der_type_encoder_f SDAP_Header_DL_encode_der;
xer_type_decoder_f SDAP_Header_DL_decode_xer;
xer_type_encoder_f SDAP_Header_DL_encode_xer;
oer_type_decoder_f SDAP_Header_DL_decode_oer;
oer_type_encoder_f SDAP_Header_DL_encode_oer;
per_type_decoder_f SDAP_Header_DL_decode_uper;
per_type_encoder_f SDAP_Header_DL_encode_uper;
per_type_decoder_f SDAP_Header_DL_decode_aper;
per_type_encoder_f SDAP_Header_DL_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SDAP_Header_DL_H_ */
#include <asn_internal.h>
