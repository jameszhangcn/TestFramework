/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_DRB_To_Setup_List_EUTRAN_H_
#define	_DRB_To_Setup_List_EUTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_To_Setup_Item_EUTRAN;

/* DRB-To-Setup-List-EUTRAN */
typedef struct DRB_To_Setup_List_EUTRAN {
	A_SEQUENCE_OF(struct DRB_To_Setup_Item_EUTRAN) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_To_Setup_List_EUTRAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_To_Setup_List_EUTRAN;
extern asn_SET_OF_specifics_t asn_SPC_DRB_To_Setup_List_EUTRAN_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_To_Setup_List_EUTRAN_1[1];
extern asn_per_constraints_t asn_PER_type_DRB_To_Setup_List_EUTRAN_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_To_Setup_List_EUTRAN_H_ */
#include <asn_internal.h>
