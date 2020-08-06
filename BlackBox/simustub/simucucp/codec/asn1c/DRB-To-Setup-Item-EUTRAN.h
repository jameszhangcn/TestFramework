/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DRB_To_Setup_Item_EUTRAN_H_
#define	_DRB_To_Setup_Item_EUTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DRB-ID.h"
#include "PDCP-Configuration.h"
#include "EUTRAN-QoS.h"
#include "UP-TNL-Information.h"
#include "Cell-Group-Information.h"
#include "Inactivity-Timer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data_Forwarding_Information_Request;
struct UP_Parameters;
struct UP_TNL_Information;
struct ProtocolExtensionContainer;

/* DRB-To-Setup-Item-EUTRAN */
typedef struct DRB_To_Setup_Item_EUTRAN {
	DRB_ID_t	 dRB_ID;
	PDCP_Configuration_t	 pDCP_Configuration;
	EUTRAN_QoS_t	 eUTRAN_QoS;
	UP_TNL_Information_t	 s1_UL_UP_TNL_Information;
	struct Data_Forwarding_Information_Request	*data_Forwarding_Information_Request;	/* OPTIONAL */
	Cell_Group_Information_t	 cell_Group_Information;
	struct UP_Parameters	*dL_UP_Parameters;	/* OPTIONAL */
	Inactivity_Timer_t	*dRB_Inactivity_Timer;	/* OPTIONAL */
	struct UP_TNL_Information	*existing_Allocated_S1_DL_UP_TNL_Info;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_To_Setup_Item_EUTRAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_To_Setup_Item_EUTRAN;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_To_Setup_Item_EUTRAN_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_To_Setup_Item_EUTRAN_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_To_Setup_Item_EUTRAN_H_ */
#include <asn_internal.h>
