/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_PDU_Session_Resource_Confirm_Modified_Item_H_
#define	_PDU_Session_Resource_Confirm_Modified_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDU-Session-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_Confirm_Modified_List_NG_RAN;
struct ProtocolExtensionContainer;

/* PDU-Session-Resource-Confirm-Modified-Item */
typedef struct PDU_Session_Resource_Confirm_Modified_Item {
	PDU_Session_ID_t	 pDU_Session_ID;
	struct DRB_Confirm_Modified_List_NG_RAN	*dRB_Confirm_Modified_List_NG_RAN;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDU_Session_Resource_Confirm_Modified_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDU_Session_Resource_Confirm_Modified_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PDU_Session_Resource_Confirm_Modified_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PDU_Session_Resource_Confirm_Modified_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PDU_Session_Resource_Confirm_Modified_Item_H_ */
#include <asn_internal.h>
