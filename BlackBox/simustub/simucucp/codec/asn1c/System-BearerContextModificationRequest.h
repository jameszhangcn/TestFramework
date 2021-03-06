/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_System_BearerContextModificationRequest_H_
#define	_System_BearerContextModificationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum System_BearerContextModificationRequest_PR {
	System_BearerContextModificationRequest_PR_NOTHING,	/* No components present */
	System_BearerContextModificationRequest_PR_e_UTRAN_BearerContextModificationRequest,
	System_BearerContextModificationRequest_PR_nG_RAN_BearerContextModificationRequest,
	System_BearerContextModificationRequest_PR_choice_extension
} System_BearerContextModificationRequest_PR;

/* Forward declarations */
struct ProtocolIE_Container;
struct ProtocolIE_SingleContainer;

/* System-BearerContextModificationRequest */
typedef struct System_BearerContextModificationRequest {
	System_BearerContextModificationRequest_PR present;
	union System_BearerContextModificationRequest_u {
		struct ProtocolIE_Container	*e_UTRAN_BearerContextModificationRequest;
		struct ProtocolIE_Container	*nG_RAN_BearerContextModificationRequest;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} System_BearerContextModificationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_System_BearerContextModificationRequest;
extern asn_CHOICE_specifics_t asn_SPC_System_BearerContextModificationRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_System_BearerContextModificationRequest_1[3];
extern asn_per_constraints_t asn_PER_type_System_BearerContextModificationRequest_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _System_BearerContextModificationRequest_H_ */
#include <asn_internal.h>
