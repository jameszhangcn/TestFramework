/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CauseRadioNetwork_H_
#define	_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseRadioNetwork {
	CauseRadioNetwork_unspecified	= 0,
	CauseRadioNetwork_unknown_or_already_allocated_gnb_cu_cp_ue_e1ap_id	= 1,
	CauseRadioNetwork_unknown_or_already_allocated_gnb_cu_up_ue_e1ap_id	= 2,
	CauseRadioNetwork_unknown_or_inconsistent_pair_of_ue_e1ap_id	= 3,
	CauseRadioNetwork_interaction_with_other_procedure	= 4,
	CauseRadioNetwork_pPDCP_Count_wrap_around	= 5,
	CauseRadioNetwork_not_supported_QCI_value	= 6,
	CauseRadioNetwork_not_supported_5QI_value	= 7,
	CauseRadioNetwork_encryption_algorithms_not_supported	= 8,
	CauseRadioNetwork_integrity_protection_algorithms_not_supported	= 9,
	CauseRadioNetwork_uP_integrity_protection_not_possible	= 10,
	CauseRadioNetwork_uP_confidentiality_protection_not_possible	= 11,
	CauseRadioNetwork_multiple_PDU_Session_ID_Instances	= 12,
	CauseRadioNetwork_unknown_PDU_Session_ID	= 13,
	CauseRadioNetwork_multiple_QoS_Flow_ID_Instances	= 14,
	CauseRadioNetwork_unknown_QoS_Flow_ID	= 15,
	CauseRadioNetwork_multiple_DRB_ID_Instances	= 16,
	CauseRadioNetwork_unknown_DRB_ID	= 17,
	CauseRadioNetwork_invalid_QoS_combination	= 18,
	CauseRadioNetwork_procedure_cancelled	= 19,
	CauseRadioNetwork_normal_release	= 20,
	CauseRadioNetwork_no_radio_resources_available	= 21,
	CauseRadioNetwork_action_desirable_for_radio_reasons	= 22,
	CauseRadioNetwork_resources_not_available_for_the_slice	= 23,
	CauseRadioNetwork_pDCP_configuration_not_supported	= 24,
	/*
	 * Enumeration is extensible
	 */
	CauseRadioNetwork_ue_dl_max_IP_data_rate_reason	= 25,
	CauseRadioNetwork_uP_integrity_protection_failure	= 26,
	CauseRadioNetwork_release_due_to_pre_emption	= 27
} e_CauseRadioNetwork;

/* CauseRadioNetwork */
typedef long	 CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_CauseRadioNetwork_specs_1;
asn_struct_free_f CauseRadioNetwork_free;
asn_struct_print_f CauseRadioNetwork_print;
asn_constr_check_f CauseRadioNetwork_constraint;
ber_type_decoder_f CauseRadioNetwork_decode_ber;
der_type_encoder_f CauseRadioNetwork_encode_der;
xer_type_decoder_f CauseRadioNetwork_decode_xer;
xer_type_encoder_f CauseRadioNetwork_encode_xer;
oer_type_decoder_f CauseRadioNetwork_decode_oer;
oer_type_encoder_f CauseRadioNetwork_encode_oer;
per_type_decoder_f CauseRadioNetwork_decode_uper;
per_type_encoder_f CauseRadioNetwork_encode_uper;
per_type_decoder_f CauseRadioNetwork_decode_aper;
per_type_encoder_f CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseRadioNetwork_H_ */
#include <asn_internal.h>
