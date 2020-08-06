/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_System_BearerContextModificationResponse_H_
#define	_System_BearerContextModificationResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum System_BearerContextModificationResponse_PR {
	System_BearerContextModificationResponse_PR_NOTHING,	/* No components present */
	System_BearerContextModificationResponse_PR_e_UTRAN_BearerContextModificationResponse,
	System_BearerContextModificationResponse_PR_nG_RAN_BearerContextModificationResponse,
	System_BearerContextModificationResponse_PR_choice_extension
} System_BearerContextModificationResponse_PR;

/* Forward declarations */
struct ProtocolIE_Container;
struct ProtocolIE_SingleContainer;

/* System-BearerContextModificationResponse */
typedef struct System_BearerContextModificationResponse {
	System_BearerContextModificationResponse_PR present;
	union System_BearerContextModificationResponse_u {
		struct ProtocolIE_Container	*e_UTRAN_BearerContextModificationResponse;
		struct ProtocolIE_Container	*nG_RAN_BearerContextModificationResponse;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} System_BearerContextModificationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_System_BearerContextModificationResponse;
extern asn_CHOICE_specifics_t asn_SPC_System_BearerContextModificationResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_System_BearerContextModificationResponse_1[3];
extern asn_per_constraints_t asn_PER_type_System_BearerContextModificationResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _System_BearerContextModificationResponse_H_ */
#include <asn_internal.h>