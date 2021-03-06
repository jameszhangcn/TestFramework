/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "ActivityInformation.h"

#include "DRB-Activity-List.h"
#include "PDU-Session-Resource-Activity-List.h"
#include "ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_ActivityInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ActivityInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ActivityInformation_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ActivityInformation, choice.dRB_Activity_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Activity_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-Activity-List"
		},
	{ ATF_POINTER, 0, offsetof(struct ActivityInformation, choice.pDU_Session_Resource_Activity_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDU_Session_Resource_Activity_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDU-Session-Resource-Activity-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ActivityInformation, choice.uE_Activity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Activity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uE-Activity"
		},
	{ ATF_POINTER, 0, offsetof(struct ActivityInformation, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_102P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ActivityInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-Activity-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDU-Session-Resource-Activity-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uE-Activity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_ActivityInformation_specs_1 = {
	sizeof(struct ActivityInformation),
	offsetof(struct ActivityInformation, _asn_ctx),
	offsetof(struct ActivityInformation, present),
	sizeof(((struct ActivityInformation *)0)->present),
	asn_MAP_ActivityInformation_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ActivityInformation = {
	"ActivityInformation",
	"ActivityInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ActivityInformation_constr_1, &asn_PER_type_ActivityInformation_constr_1, CHOICE_constraint },
	asn_MBR_ActivityInformation_1,
	4,	/* Elements count */
	&asn_SPC_ActivityInformation_specs_1	/* Additional specs */
};

