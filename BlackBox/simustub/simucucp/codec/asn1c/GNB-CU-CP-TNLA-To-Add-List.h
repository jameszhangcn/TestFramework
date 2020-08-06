/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "E1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_GNB_CU_CP_TNLA_To_Add_List_H_
#define	_GNB_CU_CP_TNLA_To_Add_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNB_CU_CP_TNLA_To_Add_Item;

/* GNB-CU-CP-TNLA-To-Add-List */
typedef struct GNB_CU_CP_TNLA_To_Add_List {
	A_SEQUENCE_OF(struct GNB_CU_CP_TNLA_To_Add_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNB_CU_CP_TNLA_To_Add_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_CU_CP_TNLA_To_Add_List;
extern asn_SET_OF_specifics_t asn_SPC_GNB_CU_CP_TNLA_To_Add_List_specs_1;
extern asn_TYPE_member_t asn_MBR_GNB_CU_CP_TNLA_To_Add_List_1[1];
extern asn_per_constraints_t asn_PER_type_GNB_CU_CP_TNLA_To_Add_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_CU_CP_TNLA_To_Add_List_H_ */
#include <asn_internal.h>
