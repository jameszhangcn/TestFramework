/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "DRB-To-Setup-Mod-Item-NG-RAN.h"

#include "Data-Forwarding-Information-Request.h"
#include "PDCP-SN-Status-Information.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRB_To_Setup_Mod_Item_NG_RAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, sDAP_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SDAP_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sDAP-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, pDCP_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-Configuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, cell_Group_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Cell_Group_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cell-Group-Information"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, flow_Mapping_Information),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoS_Flow_QoS_Parameter_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"flow-Mapping-Information"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, dRB_Data_Forwarding_Information_Request),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Data_Forwarding_Information_Request,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-Data-Forwarding-Information-Request"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, dRB_Inactivity_Timer),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inactivity_Timer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-Inactivity-Timer"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, pDCP_SN_Status_Information),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_SN_Status_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-SN-Status-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRB_To_Setup_Mod_Item_NG_RAN_oms_1[] = { 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_To_Setup_Mod_Item_NG_RAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sDAP-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pDCP-Configuration */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cell-Group-Information */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* flow-Mapping-Information */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dRB-Data-Forwarding-Information-Request */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dRB-Inactivity-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pDCP-SN-Status-Information */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_To_Setup_Mod_Item_NG_RAN_specs_1 = {
	sizeof(struct DRB_To_Setup_Mod_Item_NG_RAN),
	offsetof(struct DRB_To_Setup_Mod_Item_NG_RAN, _asn_ctx),
	asn_MAP_DRB_To_Setup_Mod_Item_NG_RAN_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_DRB_To_Setup_Mod_Item_NG_RAN_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN = {
	"DRB-To-Setup-Mod-Item-NG-RAN",
	"DRB-To-Setup-Mod-Item-NG-RAN",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1,
	sizeof(asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1)
		/sizeof(asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1[0]), /* 1 */
	asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1)
		/sizeof(asn_DEF_DRB_To_Setup_Mod_Item_NG_RAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_To_Setup_Mod_Item_NG_RAN_1,
	9,	/* Elements count */
	&asn_SPC_DRB_To_Setup_Mod_Item_NG_RAN_specs_1	/* Additional specs */
};
