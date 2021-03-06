/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DRB_To_Modify_Item_EUTRAN_H_
#define	_DRB_To_Modify_Item_EUTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-ID.h"
#include "PDCP-SN-Status-Request.h"
#include "Inactivity-Timer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDCP_Configuration;
struct EUTRAN_QoS;
struct UP_TNL_Information;
struct Data_Forwarding_Information;
struct PDCP_SN_Status_Information;
struct UP_Parameters;
struct Cell_Group_Information;
struct ProtocolExtensionContainer;

/* DRB-To-Modify-Item-EUTRAN */
typedef struct DRB_To_Modify_Item_EUTRAN {
	DRB_ID_t	 dRB_ID;
	struct PDCP_Configuration	*pDCP_Configuration;	/* OPTIONAL */
	struct EUTRAN_QoS	*eUTRAN_QoS;	/* OPTIONAL */
	struct UP_TNL_Information	*s1_UL_UP_TNL_Information;	/* OPTIONAL */
	struct Data_Forwarding_Information	*data_Forwarding_Information;	/* OPTIONAL */
	PDCP_SN_Status_Request_t	*pDCP_SN_Status_Request;	/* OPTIONAL */
	struct PDCP_SN_Status_Information	*pDCP_SN_Status_Information;	/* OPTIONAL */
	struct UP_Parameters	*dL_UP_Parameters;	/* OPTIONAL */
	struct Cell_Group_Information	*cell_Group_To_Add;	/* OPTIONAL */
	struct Cell_Group_Information	*cell_Group_To_Modify;	/* OPTIONAL */
	struct Cell_Group_Information	*cell_Group_To_Remove;	/* OPTIONAL */
	Inactivity_Timer_t	*dRB_Inactivity_Timer;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_To_Modify_Item_EUTRAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_To_Modify_Item_EUTRAN;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_To_Modify_Item_EUTRAN_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_To_Modify_Item_EUTRAN_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_To_Modify_Item_EUTRAN_H_ */
#include <asn_internal.h>
