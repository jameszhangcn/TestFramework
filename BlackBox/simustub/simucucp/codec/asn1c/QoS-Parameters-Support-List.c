/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "QoS-Parameters-Support-List.h"

#include "EUTRAN-QoS-Support-List.h"
#include "NG-RAN-QoS-Support-List.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_QoS_Parameters_Support_List_1[] = {
	{ ATF_POINTER, 3, offsetof(struct QoS_Parameters_Support_List, eUTRAN_QoS_Support_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRAN_QoS_Support_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-QoS-Support-List"
		},
	{ ATF_POINTER, 2, offsetof(struct QoS_Parameters_Support_List, nG_RAN_QoS_Support_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NG_RAN_QoS_Support_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nG-RAN-QoS-Support-List"
		},
	{ ATF_POINTER, 1, offsetof(struct QoS_Parameters_Support_List, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P85,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_QoS_Parameters_Support_List_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_QoS_Parameters_Support_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QoS_Parameters_Support_List_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRAN-QoS-Support-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nG-RAN-QoS-Support-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_QoS_Parameters_Support_List_specs_1 = {
	sizeof(struct QoS_Parameters_Support_List),
	offsetof(struct QoS_Parameters_Support_List, _asn_ctx),
	asn_MAP_QoS_Parameters_Support_List_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_QoS_Parameters_Support_List_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QoS_Parameters_Support_List = {
	"QoS-Parameters-Support-List",
	"QoS-Parameters-Support-List",
	&asn_OP_SEQUENCE,
	asn_DEF_QoS_Parameters_Support_List_tags_1,
	sizeof(asn_DEF_QoS_Parameters_Support_List_tags_1)
		/sizeof(asn_DEF_QoS_Parameters_Support_List_tags_1[0]), /* 1 */
	asn_DEF_QoS_Parameters_Support_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_QoS_Parameters_Support_List_tags_1)
		/sizeof(asn_DEF_QoS_Parameters_Support_List_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QoS_Parameters_Support_List_1,
	3,	/* Elements count */
	&asn_SPC_QoS_Parameters_Support_List_specs_1	/* Additional specs */
};

