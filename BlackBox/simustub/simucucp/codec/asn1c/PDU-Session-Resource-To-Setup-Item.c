/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "PDU-Session-Resource-To-Setup-Item.h"

#include "Data-Forwarding-Information-Request.h"
#include "UP-TNL-Information.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_PDU_Session_Resource_To_Setup_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, pDU_Session_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDU_Session_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, pDU_Session_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDU_Session_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, sNSSAI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SNSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sNSSAI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, securityIndication),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct PDU_Session_Resource_To_Setup_Item, pDU_Session_Resource_DL_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-Resource-DL-AMBR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, nG_UL_UP_TNL_Information),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UP_TNL_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nG-UL-UP-TNL-Information"
		},
	{ ATF_POINTER, 4, offsetof(struct PDU_Session_Resource_To_Setup_Item, pDU_Session_Data_Forwarding_Information_Request),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Data_Forwarding_Information_Request,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-Data-Forwarding-Information-Request"
		},
	{ ATF_POINTER, 3, offsetof(struct PDU_Session_Resource_To_Setup_Item, pDU_Session_Inactivity_Timer),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inactivity_Timer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-Inactivity-Timer"
		},
	{ ATF_POINTER, 2, offsetof(struct PDU_Session_Resource_To_Setup_Item, existing_Allocated_NG_DL_UP_TNL_Info),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UP_TNL_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"existing-Allocated-NG-DL-UP-TNL-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct PDU_Session_Resource_To_Setup_Item, networkInstance),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NetworkInstance,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"networkInstance"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDU_Session_Resource_To_Setup_Item, dRB_To_Setup_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_To_Setup_List_NG_RAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-To-Setup-List-NG-RAN"
		},
	{ ATF_POINTER, 1, offsetof(struct PDU_Session_Resource_To_Setup_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P79,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_PDU_Session_Resource_To_Setup_Item_oms_1[] = { 4, 6, 7, 8, 9, 11 };
static const ber_tlv_tag_t asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDU_Session_Resource_To_Setup_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDU-Session-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDU-Session-Type */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sNSSAI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* securityIndication */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pDU-Session-Resource-DL-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nG-UL-UP-TNL-Information */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pDU-Session-Data-Forwarding-Information-Request */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pDU-Session-Inactivity-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* existing-Allocated-NG-DL-UP-TNL-Info */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* networkInstance */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dRB-To-Setup-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_PDU_Session_Resource_To_Setup_Item_specs_1 = {
	sizeof(struct PDU_Session_Resource_To_Setup_Item),
	offsetof(struct PDU_Session_Resource_To_Setup_Item, _asn_ctx),
	asn_MAP_PDU_Session_Resource_To_Setup_Item_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_PDU_Session_Resource_To_Setup_Item_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDU_Session_Resource_To_Setup_Item = {
	"PDU-Session-Resource-To-Setup-Item",
	"PDU-Session-Resource-To-Setup-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1,
	sizeof(asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1)
		/sizeof(asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1[0]), /* 1 */
	asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1)
		/sizeof(asn_DEF_PDU_Session_Resource_To_Setup_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDU_Session_Resource_To_Setup_Item_1,
	12,	/* Elements count */
	&asn_SPC_PDU_Session_Resource_To_Setup_Item_specs_1	/* Additional specs */
};

