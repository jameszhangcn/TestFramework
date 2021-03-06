/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_System_BearerContextModificationConfirm_H_
#define	_System_BearerContextModificationConfirm_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum System_BearerContextModificationConfirm_PR {
	System_BearerContextModificationConfirm_PR_NOTHING,	/* No components present */
	System_BearerContextModificationConfirm_PR_e_UTRAN_BearerContextModificationConfirm,
	System_BearerContextModificationConfirm_PR_nG_RAN_BearerContextModificationConfirm,
	System_BearerContextModificationConfirm_PR_choice_extension
} System_BearerContextModificationConfirm_PR;

/* Forward declarations */
struct ProtocolIE_Container;
struct ProtocolIE_SingleContainer;

/* System-BearerContextModificationConfirm */
typedef struct System_BearerContextModificationConfirm {
	System_BearerContextModificationConfirm_PR present;
	union System_BearerContextModificationConfirm_u {
		struct ProtocolIE_Container	*e_UTRAN_BearerContextModificationConfirm;
		struct ProtocolIE_Container	*nG_RAN_BearerContextModificationConfirm;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} System_BearerContextModificationConfirm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_System_BearerContextModificationConfirm;
extern asn_CHOICE_specifics_t asn_SPC_System_BearerContextModificationConfirm_specs_1;
extern asn_TYPE_member_t asn_MBR_System_BearerContextModificationConfirm_1[3];
extern asn_per_constraints_t asn_PER_type_System_BearerContextModificationConfirm_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _System_BearerContextModificationConfirm_H_ */
#include <asn_internal.h>
