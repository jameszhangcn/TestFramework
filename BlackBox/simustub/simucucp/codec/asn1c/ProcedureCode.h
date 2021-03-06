/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-CommonDataTypes"
 * 	found in "E1AP-CommonDataTypes.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_ProcedureCode_H_
#define	_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProcedureCode */
typedef long	 ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProcedureCode;
asn_struct_free_f ProcedureCode_free;
asn_struct_print_f ProcedureCode_print;
asn_constr_check_f ProcedureCode_constraint;
ber_type_decoder_f ProcedureCode_decode_ber;
der_type_encoder_f ProcedureCode_encode_der;
xer_type_decoder_f ProcedureCode_decode_xer;
xer_type_encoder_f ProcedureCode_encode_xer;
oer_type_decoder_f ProcedureCode_decode_oer;
oer_type_encoder_f ProcedureCode_encode_oer;
per_type_decoder_f ProcedureCode_decode_uper;
per_type_encoder_f ProcedureCode_encode_uper;
per_type_decoder_f ProcedureCode_decode_aper;
per_type_encoder_f ProcedureCode_encode_aper;
#define ProcedureCode_id_reset	((ProcedureCode_t)0)
#define ProcedureCode_id_errorIndication	((ProcedureCode_t)1)
#define ProcedureCode_id_privateMessage	((ProcedureCode_t)2)
#define ProcedureCode_id_gNB_CU_UP_E1Setup	((ProcedureCode_t)3)
#define ProcedureCode_id_gNB_CU_CP_E1Setup	((ProcedureCode_t)4)
#define ProcedureCode_id_gNB_CU_UP_ConfigurationUpdate	((ProcedureCode_t)5)
#define ProcedureCode_id_gNB_CU_CP_ConfigurationUpdate	((ProcedureCode_t)6)
#define ProcedureCode_id_e1Release	((ProcedureCode_t)7)
#define ProcedureCode_id_bearerContextSetup	((ProcedureCode_t)8)
#define ProcedureCode_id_bearerContextModification	((ProcedureCode_t)9)
#define ProcedureCode_id_bearerContextModificationRequired	((ProcedureCode_t)10)
#define ProcedureCode_id_bearerContextRelease	((ProcedureCode_t)11)
#define ProcedureCode_id_bearerContextReleaseRequest	((ProcedureCode_t)12)
#define ProcedureCode_id_bearerContextInactivityNotification	((ProcedureCode_t)13)
#define ProcedureCode_id_dLDataNotification	((ProcedureCode_t)14)
#define ProcedureCode_id_dataUsageReport	((ProcedureCode_t)15)
#define ProcedureCode_id_gNB_CU_UP_CounterCheck	((ProcedureCode_t)16)
#define ProcedureCode_id_gNB_CU_UP_StatusIndication	((ProcedureCode_t)17)
#define ProcedureCode_id_uLDataNotification	((ProcedureCode_t)18)
#define ProcedureCode_id_mRDC_DataUsageReport	((ProcedureCode_t)19)

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureCode_H_ */
#include <asn_internal.h>
