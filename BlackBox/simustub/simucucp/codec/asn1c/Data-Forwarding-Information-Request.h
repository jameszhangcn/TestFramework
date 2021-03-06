/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_Data_Forwarding_Information_Request_H_
#define	_Data_Forwarding_Information_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Data-Forwarding-Request.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QoS_Flow_Mapping_List;
struct ProtocolExtensionContainer;

/* Data-Forwarding-Information-Request */
typedef struct Data_Forwarding_Information_Request {
	Data_Forwarding_Request_t	 data_Forwarding_Request;
	struct QoS_Flow_Mapping_List	*qoS_Flows_Forwarded_On_Fwd_Tunnels;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Data_Forwarding_Information_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Data_Forwarding_Information_Request;
extern asn_SEQUENCE_specifics_t asn_SPC_Data_Forwarding_Information_Request_specs_1;
extern asn_TYPE_member_t asn_MBR_Data_Forwarding_Information_Request_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Data_Forwarding_Information_Request_H_ */
#include <asn_internal.h>
