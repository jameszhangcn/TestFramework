/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDU_Session_Resource_Failed_To_Modify_Item_H_
#define	_PDU_Session_Resource_Failed_To_Modify_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDU-Session-ID.h"
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDU-Session-Resource-Failed-To-Modify-Item */
typedef struct PDU_Session_Resource_Failed_To_Modify_Item {
	PDU_Session_ID_t	 pDU_Session_ID;
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDU_Session_Resource_Failed_To_Modify_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDU_Session_Resource_Failed_To_Modify_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PDU_Session_Resource_Failed_To_Modify_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PDU_Session_Resource_Failed_To_Modify_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDU_Session_Resource_Failed_To_Modify_Item_H_ */
#include <asn_internal.h>
