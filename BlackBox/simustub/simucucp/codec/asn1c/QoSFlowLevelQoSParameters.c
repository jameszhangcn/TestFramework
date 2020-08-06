/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "QoSFlowLevelQoSParameters.h"

#include "GBR-QoSFlowInformation.h"
#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_paging_Policy_Indicator_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_reflective_QoS_Attribute_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reflective_QoS_Attribute_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_additional_QoS_Information_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_additional_QoS_Information_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_reflective_QoS_Indicator_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reflective_QoS_Indicator_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_paging_Policy_Indicator_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_paging_Policy_Indicator_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (1..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_reflective_QoS_Attribute_value2enum_5[] = {
	{ 0,	10,	"subject-to" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_reflective_QoS_Attribute_enum2value_5[] = {
	0	/* subject-to(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_reflective_QoS_Attribute_specs_5 = {
	asn_MAP_reflective_QoS_Attribute_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_reflective_QoS_Attribute_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reflective_QoS_Attribute_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reflective_QoS_Attribute_5 = {
	"reflective-QoS-Attribute",
	"reflective-QoS-Attribute",
	&asn_OP_NativeEnumerated,
	asn_DEF_reflective_QoS_Attribute_tags_5,
	sizeof(asn_DEF_reflective_QoS_Attribute_tags_5)
		/sizeof(asn_DEF_reflective_QoS_Attribute_tags_5[0]) - 1, /* 1 */
	asn_DEF_reflective_QoS_Attribute_tags_5,	/* Same as above */
	sizeof(asn_DEF_reflective_QoS_Attribute_tags_5)
		/sizeof(asn_DEF_reflective_QoS_Attribute_tags_5[0]), /* 2 */
	{ &asn_OER_type_reflective_QoS_Attribute_constr_5, &asn_PER_type_reflective_QoS_Attribute_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reflective_QoS_Attribute_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_additional_QoS_Information_value2enum_8[] = {
	{ 0,	11,	"more-likely" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_additional_QoS_Information_enum2value_8[] = {
	0	/* more-likely(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_additional_QoS_Information_specs_8 = {
	asn_MAP_additional_QoS_Information_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_additional_QoS_Information_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_additional_QoS_Information_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additional_QoS_Information_8 = {
	"additional-QoS-Information",
	"additional-QoS-Information",
	&asn_OP_NativeEnumerated,
	asn_DEF_additional_QoS_Information_tags_8,
	sizeof(asn_DEF_additional_QoS_Information_tags_8)
		/sizeof(asn_DEF_additional_QoS_Information_tags_8[0]) - 1, /* 1 */
	asn_DEF_additional_QoS_Information_tags_8,	/* Same as above */
	sizeof(asn_DEF_additional_QoS_Information_tags_8)
		/sizeof(asn_DEF_additional_QoS_Information_tags_8[0]), /* 2 */
	{ &asn_OER_type_additional_QoS_Information_constr_8, &asn_PER_type_additional_QoS_Information_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_additional_QoS_Information_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reflective_QoS_Indicator_value2enum_12[] = {
	{ 0,	7,	"enabled" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_reflective_QoS_Indicator_enum2value_12[] = {
	0	/* enabled(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_reflective_QoS_Indicator_specs_12 = {
	asn_MAP_reflective_QoS_Indicator_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_reflective_QoS_Indicator_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reflective_QoS_Indicator_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reflective_QoS_Indicator_12 = {
	"reflective-QoS-Indicator",
	"reflective-QoS-Indicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_reflective_QoS_Indicator_tags_12,
	sizeof(asn_DEF_reflective_QoS_Indicator_tags_12)
		/sizeof(asn_DEF_reflective_QoS_Indicator_tags_12[0]) - 1, /* 1 */
	asn_DEF_reflective_QoS_Indicator_tags_12,	/* Same as above */
	sizeof(asn_DEF_reflective_QoS_Indicator_tags_12)
		/sizeof(asn_DEF_reflective_QoS_Indicator_tags_12[0]), /* 2 */
	{ &asn_OER_type_reflective_QoS_Indicator_constr_12, &asn_PER_type_reflective_QoS_Indicator_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reflective_QoS_Indicator_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_QoSFlowLevelQoSParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QoSFlowLevelQoSParameters, qoS_Characteristics),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_QoS_Characteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qoS-Characteristics"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct QoSFlowLevelQoSParameters, nGRANallocationRetentionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGRANAllocationAndRetentionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nGRANallocationRetentionPriority"
		},
	{ ATF_POINTER, 6, offsetof(struct QoSFlowLevelQoSParameters, gBR_QoS_Flow_Information),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GBR_QoSFlowInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gBR-QoS-Flow-Information"
		},
	{ ATF_POINTER, 5, offsetof(struct QoSFlowLevelQoSParameters, reflective_QoS_Attribute),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reflective_QoS_Attribute_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reflective-QoS-Attribute"
		},
	{ ATF_POINTER, 4, offsetof(struct QoSFlowLevelQoSParameters, additional_QoS_Information),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_additional_QoS_Information_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additional-QoS-Information"
		},
	{ ATF_POINTER, 3, offsetof(struct QoSFlowLevelQoSParameters, paging_Policy_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_paging_Policy_Indicator_constr_11, &asn_PER_memb_paging_Policy_Indicator_constr_11,  memb_paging_Policy_Indicator_constraint_1 },
		0, 0, /* No default value */
		"paging-Policy-Indicator"
		},
	{ ATF_POINTER, 2, offsetof(struct QoSFlowLevelQoSParameters, reflective_QoS_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reflective_QoS_Indicator_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reflective-QoS-Indicator"
		},
	{ ATF_POINTER, 1, offsetof(struct QoSFlowLevelQoSParameters, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_128P87,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_QoSFlowLevelQoSParameters_oms_1[] = { 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_QoSFlowLevelQoSParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QoSFlowLevelQoSParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qoS-Characteristics */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nGRANallocationRetentionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gBR-QoS-Flow-Information */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reflective-QoS-Attribute */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* additional-QoS-Information */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* paging-Policy-Indicator */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* reflective-QoS-Indicator */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_QoSFlowLevelQoSParameters_specs_1 = {
	sizeof(struct QoSFlowLevelQoSParameters),
	offsetof(struct QoSFlowLevelQoSParameters, _asn_ctx),
	asn_MAP_QoSFlowLevelQoSParameters_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_QoSFlowLevelQoSParameters_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QoSFlowLevelQoSParameters = {
	"QoSFlowLevelQoSParameters",
	"QoSFlowLevelQoSParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_QoSFlowLevelQoSParameters_tags_1,
	sizeof(asn_DEF_QoSFlowLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_QoSFlowLevelQoSParameters_tags_1[0]), /* 1 */
	asn_DEF_QoSFlowLevelQoSParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_QoSFlowLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_QoSFlowLevelQoSParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QoSFlowLevelQoSParameters_1,
	8,	/* Elements count */
	&asn_SPC_QoSFlowLevelQoSParameters_specs_1	/* Additional specs */
};
