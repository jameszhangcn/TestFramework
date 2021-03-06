/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDCP_Count_H_
#define	_PDCP_Count_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDCP-SN.h"
#include "HFN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDCP-Count */
typedef struct PDCP_Count {
	PDCP_SN_t	 pDCP_SN;
	HFN_t	 hFN;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Count_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Count;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_Count_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_Count_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Count_H_ */
#include <asn_internal.h>
