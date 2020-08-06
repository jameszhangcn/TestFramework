/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "DRB-To-Setup-Item-EUTRAN.h"

#include "Data-Forwarding-Information-Request.h"
#include "UP-Parameters.h"
#include "UP-TNL-Information.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRB_To_Setup_Item_EUTRAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Item_EUTRAN, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Item_EUTRAN, pDCP_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Item_EUTRAN, eUTRAN_QoS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRAN_QoS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-QoS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Item_EUTRAN, s1_UL_UP_TNL_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UP_TNL_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1-UL-UP-TNL-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_To_Setup_Item_EUTRAN, data_Forwarding_Information_Request),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Data_Forwarding_Information_Request,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-Forwarding-Information-Request"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Item_EUTRAN, cell_Group_Information),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Cell_Group_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-Group-Information"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_To_Setup_Item_EUTRAN, dL_UP_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UP_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-UP-Parameters"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_To_Setup_Item_EUTRAN, dRB_Inactivity_Timer),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inactivity_Timer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-Inactivity-Timer"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_To_Setup_Item_EUTRAN, existing_Allocated_S1_DL_UP_TNL_Info),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UP_TNL_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"existing-Allocated-S1-DL-UP-TNL-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_To_Setup_Item_EUTRAN, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRB_To_Setup_Item_EUTRAN_oms_1[] = { 4, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_To_Setup_Item_EUTRAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDCP-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eUTRAN-QoS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* s1-UL-UP-TNL-Information */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* data-Forwarding-Information-Request */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cell-Group-Information */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dL-UP-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dRB-Inactivity-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* existing-Allocated-S1-DL-UP-TNL-Info */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_To_Setup_Item_EUTRAN_specs_1 = {
	sizeof(struct DRB_To_Setup_Item_EUTRAN),
	offsetof(struct DRB_To_Setup_Item_EUTRAN, _asn_ctx),
	asn_MAP_DRB_To_Setup_Item_EUTRAN_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_DRB_To_Setup_Item_EUTRAN_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_To_Setup_Item_EUTRAN = {
	"DRB-To-Setup-Item-EUTRAN",
	"DRB-To-Setup-Item-EUTRAN",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1,
	sizeof(asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1[0]), /* 1 */
	asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRB_To_Setup_Item_EUTRAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_To_Setup_Item_EUTRAN_1,
	10,	/* Elements count */
	&asn_SPC_DRB_To_Setup_Item_EUTRAN_specs_1	/* Additional specs */
};
