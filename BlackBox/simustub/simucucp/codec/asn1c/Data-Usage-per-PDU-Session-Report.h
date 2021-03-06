/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_Data_Usage_per_PDU_Session_Report_H_
#define	_Data_Usage_per_PDU_Session_Report_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Data_Usage_per_PDU_Session_Report__secondaryRATType {
	Data_Usage_per_PDU_Session_Report__secondaryRATType_nR	= 0,
	Data_Usage_per_PDU_Session_Report__secondaryRATType_e_UTRA	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Data_Usage_per_PDU_Session_Report__secondaryRATType;

/* Forward declarations */
struct ProtocolExtensionContainer;
struct MRDC_Data_Usage_Report_Item;

/* Data-Usage-per-PDU-Session-Report */
typedef struct Data_Usage_per_PDU_Session_Report {
	long	 secondaryRATType;
	struct Data_Usage_per_PDU_Session_Report__pDU_session_Timed_Report_List {
		A_SEQUENCE_OF(struct MRDC_Data_Usage_Report_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pDU_session_Timed_Report_List;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Data_Usage_per_PDU_Session_Report_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_secondaryRATType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Data_Usage_per_PDU_Session_Report;
extern asn_SEQUENCE_specifics_t asn_SPC_Data_Usage_per_PDU_Session_Report_specs_1;
extern asn_TYPE_member_t asn_MBR_Data_Usage_per_PDU_Session_Report_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Data_Usage_per_PDU_Session_Report_H_ */
#include <asn_internal.h>
