/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_MRDC_Usage_Information_H_
#define	_MRDC_Usage_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data_Usage_per_PDU_Session_Report;
struct Data_Usage_per_QoS_Flow_List;
struct ProtocolExtensionContainer;

/* MRDC-Usage-Information */
typedef struct MRDC_Usage_Information {
	struct Data_Usage_per_PDU_Session_Report	*data_Usage_per_PDU_Session_Report;	/* OPTIONAL */
	struct Data_Usage_per_QoS_Flow_List	*data_Usage_per_QoS_Flow_List;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MRDC_Usage_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MRDC_Usage_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_MRDC_Usage_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_MRDC_Usage_Information_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MRDC_Usage_Information_H_ */
#include <asn_internal.h>
