/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_T_Reordering_H_
#define	_T_Reordering_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_Reordering {
	T_Reordering_ms0	= 0,
	T_Reordering_ms1	= 1,
	T_Reordering_ms2	= 2,
	T_Reordering_ms4	= 3,
	T_Reordering_ms5	= 4,
	T_Reordering_ms8	= 5,
	T_Reordering_ms10	= 6,
	T_Reordering_ms15	= 7,
	T_Reordering_ms20	= 8,
	T_Reordering_ms30	= 9,
	T_Reordering_ms40	= 10,
	T_Reordering_ms50	= 11,
	T_Reordering_ms60	= 12,
	T_Reordering_ms80	= 13,
	T_Reordering_ms100	= 14,
	T_Reordering_ms120	= 15,
	T_Reordering_ms140	= 16,
	T_Reordering_ms160	= 17,
	T_Reordering_ms180	= 18,
	T_Reordering_ms200	= 19,
	T_Reordering_ms220	= 20,
	T_Reordering_ms240	= 21,
	T_Reordering_ms260	= 22,
	T_Reordering_ms280	= 23,
	T_Reordering_ms300	= 24,
	T_Reordering_ms500	= 25,
	T_Reordering_ms750	= 26,
	T_Reordering_ms1000	= 27,
	T_Reordering_ms1250	= 28,
	T_Reordering_ms1500	= 29,
	T_Reordering_ms1750	= 30,
	T_Reordering_ms2000	= 31,
	T_Reordering_ms2250	= 32,
	T_Reordering_ms2500	= 33,
	T_Reordering_ms2750	= 34,
	T_Reordering_ms3000	= 35
	/*
	 * Enumeration is extensible
	 */
} e_T_Reordering;

/* T-Reordering */
typedef long	 T_Reordering_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_Reordering_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_Reordering;
extern const asn_INTEGER_specifics_t asn_SPC_T_Reordering_specs_1;
asn_struct_free_f T_Reordering_free;
asn_struct_print_f T_Reordering_print;
asn_constr_check_f T_Reordering_constraint;
ber_type_decoder_f T_Reordering_decode_ber;
der_type_encoder_f T_Reordering_encode_der;
xer_type_decoder_f T_Reordering_decode_xer;
xer_type_encoder_f T_Reordering_encode_xer;
oer_type_decoder_f T_Reordering_decode_oer;
oer_type_encoder_f T_Reordering_encode_oer;
per_type_decoder_f T_Reordering_decode_uper;
per_type_encoder_f T_Reordering_encode_uper;
per_type_decoder_f T_Reordering_decode_aper;
per_type_encoder_f T_Reordering_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_Reordering_H_ */
#include <asn_internal.h>
