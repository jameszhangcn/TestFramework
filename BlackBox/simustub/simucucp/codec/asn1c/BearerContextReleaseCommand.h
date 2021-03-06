/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_BearerContextReleaseCommand_H_
#define	_BearerContextReleaseCommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BearerContextReleaseCommand */
typedef struct BearerContextReleaseCommand {
	ProtocolIE_Container_99P37_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BearerContextReleaseCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BearerContextReleaseCommand;

#ifdef __cplusplus
}
#endif

#endif	/* _BearerContextReleaseCommand_H_ */
#include <asn_internal.h>
