/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_CriticalityDiagnostics_IE_List_H_
#define	_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "Criticality.h"
#include "ProtocolIE-ID.h"
#include "TypeOfError.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct CriticalityDiagnostics_IE_List__Member {
	Criticality_t	 iECriticality;
	ProtocolIE_ID_t	 iE_ID;
	TypeOfError_t	 typeOfError;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_List__Member;

/* CriticalityDiagnostics-IE-List */
typedef struct CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(CriticalityDiagnostics_IE_List__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics_IE_List;
extern asn_SET_OF_specifics_t asn_SPC_CriticalityDiagnostics_IE_List_specs_1;
extern asn_TYPE_member_t asn_MBR_CriticalityDiagnostics_IE_List_1[1];
extern asn_per_constraints_t asn_PER_type_CriticalityDiagnostics_IE_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
