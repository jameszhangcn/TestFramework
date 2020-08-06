/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "E1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "PDCP-DataRecovery.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PDCP_DataRecovery_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PDCP_DataRecovery_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PDCP_DataRecovery_value2enum_1[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_PDCP_DataRecovery_enum2value_1[] = {
	0	/* true(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_PDCP_DataRecovery_specs_1 = {
	asn_MAP_PDCP_DataRecovery_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PDCP_DataRecovery_enum2value_1,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PDCP_DataRecovery_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PDCP_DataRecovery = {
	"PDCP-DataRecovery",
	"PDCP-DataRecovery",
	&asn_OP_NativeEnumerated,
	asn_DEF_PDCP_DataRecovery_tags_1,
	sizeof(asn_DEF_PDCP_DataRecovery_tags_1)
		/sizeof(asn_DEF_PDCP_DataRecovery_tags_1[0]), /* 1 */
	asn_DEF_PDCP_DataRecovery_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_DataRecovery_tags_1)
		/sizeof(asn_DEF_PDCP_DataRecovery_tags_1[0]), /* 1 */
	{ &asn_OER_type_PDCP_DataRecovery_constr_1, &asn_PER_type_PDCP_DataRecovery_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PDCP_DataRecovery_specs_1	/* Additional specs */
};
