/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "DRBs-Subject-To-Counter-Check-Item-EUTRAN.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRBs_Subject_To_Counter_Check_Item_EUTRAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN, pDCP_UL_Count),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Count,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-UL-Count"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN, pDCP_DL_Count),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Count,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-DL-Count"
		},
	{ ATF_POINTER, 1, offsetof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRBs_Subject_To_Counter_Check_Item_EUTRAN_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDCP-UL-Count */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pDCP-DL-Count */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRBs_Subject_To_Counter_Check_Item_EUTRAN_specs_1 = {
	sizeof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN),
	offsetof(struct DRBs_Subject_To_Counter_Check_Item_EUTRAN, _asn_ctx),
	asn_MAP_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DRBs_Subject_To_Counter_Check_Item_EUTRAN_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN = {
	"DRBs-Subject-To-Counter-Check-Item-EUTRAN",
	"DRBs-Subject-To-Counter-Check-Item-EUTRAN",
	&asn_OP_SEQUENCE,
	asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1,
	sizeof(asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1[0]), /* 1 */
	asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRBs_Subject_To_Counter_Check_Item_EUTRAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRBs_Subject_To_Counter_Check_Item_EUTRAN_1,
	4,	/* Elements count */
	&asn_SPC_DRBs_Subject_To_Counter_Check_Item_EUTRAN_specs_1	/* Additional specs */
};
