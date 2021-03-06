/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_Data_Forwarding_Information_H_
#define	_Data_Forwarding_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UP_TNL_Information;
struct ProtocolExtensionContainer;

/* Data-Forwarding-Information */
typedef struct Data_Forwarding_Information {
	struct UP_TNL_Information	*uL_Data_Forwarding;	/* OPTIONAL */
	struct UP_TNL_Information	*dL_Data_Forwarding;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Data_Forwarding_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Data_Forwarding_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_Data_Forwarding_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_Data_Forwarding_Information_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Data_Forwarding_Information_H_ */
#include <asn_internal.h>
