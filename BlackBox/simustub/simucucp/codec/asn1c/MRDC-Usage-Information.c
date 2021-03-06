/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "MRDC-Usage-Information.h"

#include "Data-Usage-per-PDU-Session-Report.h"
#include "Data-Usage-per-QoS-Flow-List.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_MRDC_Usage_Information_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MRDC_Usage_Information, data_Usage_per_PDU_Session_Report),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Data_Usage_per_PDU_Session_Report,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-Usage-per-PDU-Session-Report"
		},
	{ ATF_POINTER, 2, offsetof(struct MRDC_Usage_Information, data_Usage_per_QoS_Flow_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Data_Usage_per_QoS_Flow_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"data-Usage-per-QoS-Flow-List"
		},
	{ ATF_POINTER, 1, offsetof(struct MRDC_Usage_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P56,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_MRDC_Usage_Information_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MRDC_Usage_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MRDC_Usage_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* data-Usage-per-PDU-Session-Report */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* data-Usage-per-QoS-Flow-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_MRDC_Usage_Information_specs_1 = {
	sizeof(struct MRDC_Usage_Information),
	offsetof(struct MRDC_Usage_Information, _asn_ctx),
	asn_MAP_MRDC_Usage_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MRDC_Usage_Information_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MRDC_Usage_Information = {
	"MRDC-Usage-Information",
	"MRDC-Usage-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_MRDC_Usage_Information_tags_1,
	sizeof(asn_DEF_MRDC_Usage_Information_tags_1)
		/sizeof(asn_DEF_MRDC_Usage_Information_tags_1[0]), /* 1 */
	asn_DEF_MRDC_Usage_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_MRDC_Usage_Information_tags_1)
		/sizeof(asn_DEF_MRDC_Usage_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MRDC_Usage_Information_1,
	3,	/* Elements count */
	&asn_SPC_MRDC_Usage_Information_specs_1	/* Additional specs */
};

