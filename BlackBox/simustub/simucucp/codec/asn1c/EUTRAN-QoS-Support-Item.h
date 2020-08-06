/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_EUTRAN_QoS_Support_Item_H_
#define	_EUTRAN_QoS_Support_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRAN-QoS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* EUTRAN-QoS-Support-Item */
typedef struct EUTRAN_QoS_Support_Item {
	EUTRAN_QoS_t	 eUTRAN_QoS;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRAN_QoS_Support_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRAN_QoS_Support_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRAN_QoS_Support_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRAN_QoS_Support_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRAN_QoS_Support_Item_H_ */
#include <asn_internal.h>