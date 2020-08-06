/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_UE_Activity_H_
#define	_UE_Activity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Activity {
	UE_Activity_active	= 0,
	UE_Activity_not_active	= 1
	/*
	 * Enumeration is extensible
	 */
} e_UE_Activity;

/* UE-Activity */
typedef long	 UE_Activity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UE_Activity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UE_Activity;
extern const asn_INTEGER_specifics_t asn_SPC_UE_Activity_specs_1;
asn_struct_free_f UE_Activity_free;
asn_struct_print_f UE_Activity_print;
asn_constr_check_f UE_Activity_constraint;
ber_type_decoder_f UE_Activity_decode_ber;
der_type_encoder_f UE_Activity_encode_der;
xer_type_decoder_f UE_Activity_decode_xer;
xer_type_encoder_f UE_Activity_encode_xer;
oer_type_decoder_f UE_Activity_decode_oer;
oer_type_encoder_f UE_Activity_encode_oer;
per_type_decoder_f UE_Activity_decode_uper;
per_type_encoder_f UE_Activity_encode_uper;
per_type_decoder_f UE_Activity_decode_aper;
per_type_encoder_f UE_Activity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Activity_H_ */
#include <asn_internal.h>