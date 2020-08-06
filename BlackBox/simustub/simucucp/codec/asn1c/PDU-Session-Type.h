/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDU_Session_Type_H_
#define	_PDU_Session_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDU_Session_Type {
	PDU_Session_Type_ipv4	= 0,
	PDU_Session_Type_ipv6	= 1,
	PDU_Session_Type_ipv4v6	= 2,
	PDU_Session_Type_ethernet	= 3,
	PDU_Session_Type_unstructured	= 4
	/*
	 * Enumeration is extensible
	 */
} e_PDU_Session_Type;

/* PDU-Session-Type */
typedef long	 PDU_Session_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PDU_Session_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PDU_Session_Type;
extern const asn_INTEGER_specifics_t asn_SPC_PDU_Session_Type_specs_1;
asn_struct_free_f PDU_Session_Type_free;
asn_struct_print_f PDU_Session_Type_print;
asn_constr_check_f PDU_Session_Type_constraint;
ber_type_decoder_f PDU_Session_Type_decode_ber;
der_type_encoder_f PDU_Session_Type_encode_der;
xer_type_decoder_f PDU_Session_Type_decode_xer;
xer_type_encoder_f PDU_Session_Type_encode_xer;
oer_type_decoder_f PDU_Session_Type_decode_oer;
oer_type_encoder_f PDU_Session_Type_encode_oer;
per_type_decoder_f PDU_Session_Type_decode_uper;
per_type_encoder_f PDU_Session_Type_encode_uper;
per_type_decoder_f PDU_Session_Type_decode_aper;
per_type_encoder_f PDU_Session_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PDU_Session_Type_H_ */
#include <asn_internal.h>
