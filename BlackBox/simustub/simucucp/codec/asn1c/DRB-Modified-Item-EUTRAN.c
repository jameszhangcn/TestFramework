/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "DRB-Modified-Item-EUTRAN.h"

#include "UP-TNL-Information.h"
#include "PDCP-SN-Status-Information.h"
#include "UP-Parameters.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_DRB_Modified_Item_EUTRAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_Modified_Item_EUTRAN, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_POINTER, 4, offsetof(struct DRB_Modified_Item_EUTRAN, s1_DL_UP_TNL_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UP_TNL_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s1-DL-UP-TNL-Information"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_Modified_Item_EUTRAN, pDCP_SN_Status_Information),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_SN_Status_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDCP-SN-Status-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_Modified_Item_EUTRAN, uL_UP_Transport_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UP_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uL-UP-Transport-Parameters"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_Modified_Item_EUTRAN, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DRB_Modified_Item_EUTRAN_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_DRB_Modified_Item_EUTRAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_Modified_Item_EUTRAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s1-DL-UP-TNL-Information */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pDCP-SN-Status-Information */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uL-UP-Transport-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_Modified_Item_EUTRAN_specs_1 = {
	sizeof(struct DRB_Modified_Item_EUTRAN),
	offsetof(struct DRB_Modified_Item_EUTRAN, _asn_ctx),
	asn_MAP_DRB_Modified_Item_EUTRAN_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DRB_Modified_Item_EUTRAN_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_Modified_Item_EUTRAN = {
	"DRB-Modified-Item-EUTRAN",
	"DRB-Modified-Item-EUTRAN",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_Modified_Item_EUTRAN_tags_1,
	sizeof(asn_DEF_DRB_Modified_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRB_Modified_Item_EUTRAN_tags_1[0]), /* 1 */
	asn_DEF_DRB_Modified_Item_EUTRAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_Modified_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_DRB_Modified_Item_EUTRAN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_Modified_Item_EUTRAN_1,
	5,	/* Elements count */
	&asn_SPC_DRB_Modified_Item_EUTRAN_specs_1	/* Additional specs */
};

