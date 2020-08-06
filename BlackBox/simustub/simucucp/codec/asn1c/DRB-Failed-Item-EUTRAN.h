/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DRB_Failed_Item_EUTRAN_H_
#define	_DRB_Failed_Item_EUTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-ID.h"
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* DRB-Failed-Item-EUTRAN */
typedef struct DRB_Failed_Item_EUTRAN {
	DRB_ID_t	 dRB_ID;
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_Failed_Item_EUTRAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_Failed_Item_EUTRAN;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_Failed_Item_EUTRAN_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_Failed_Item_EUTRAN_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_Failed_Item_EUTRAN_H_ */
#include <asn_internal.h>