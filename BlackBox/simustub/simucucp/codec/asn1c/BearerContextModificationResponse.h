/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_BearerContextModificationResponse_H_
#define	_BearerContextModificationResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BearerContextModificationResponse */
typedef struct BearerContextModificationResponse {
	ProtocolIE_Container_99P27_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BearerContextModificationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BearerContextModificationResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _BearerContextModificationResponse_H_ */
#include <asn_internal.h>
