/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DLDataNotification_H_
#define	_DLDataNotification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DLDataNotification */
typedef struct DLDataNotification {
	ProtocolIE_Container_99P41_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLDataNotification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLDataNotification;

#ifdef __cplusplus
}
#endif

#endif	/* _DLDataNotification_H_ */
#include <asn_internal.h>
