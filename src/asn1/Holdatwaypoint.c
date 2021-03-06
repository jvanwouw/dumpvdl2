/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cpdlc-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "Holdatwaypoint.h"

static asn_TYPE_member_t asn_MBR_Holdatwaypoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Holdatwaypoint, position),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Position,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"position"
		},
	{ ATF_POINTER, 7, offsetof(struct Holdatwaypoint, holdatwaypointspeedlow),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_HoldatwaypointSpeedLow,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"holdatwaypointspeedlow"
		},
	{ ATF_POINTER, 6, offsetof(struct Holdatwaypoint, aTWlevel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ATWLevel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aTWlevel"
		},
	{ ATF_POINTER, 5, offsetof(struct Holdatwaypoint, holdatwaypointspeedhigh),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_HoldatwaypointSpeedHigh,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"holdatwaypointspeedhigh"
		},
	{ ATF_POINTER, 4, offsetof(struct Holdatwaypoint, direction),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Direction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"direction"
		},
	{ ATF_POINTER, 3, offsetof(struct Holdatwaypoint, degrees),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Degrees,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"degrees"
		},
	{ ATF_POINTER, 2, offsetof(struct Holdatwaypoint, eFCtime),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Time,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eFCtime"
		},
	{ ATF_POINTER, 1, offsetof(struct Holdatwaypoint, legtype),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LegType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"legtype"
		},
};
static const int asn_MAP_Holdatwaypoint_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_Holdatwaypoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Holdatwaypoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* holdatwaypointspeedlow */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aTWlevel */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* holdatwaypointspeedhigh */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* degrees */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* eFCtime */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* legtype */
};
static asn_SEQUENCE_specifics_t asn_SPC_Holdatwaypoint_specs_1 = {
	sizeof(struct Holdatwaypoint),
	offsetof(struct Holdatwaypoint, _asn_ctx),
	asn_MAP_Holdatwaypoint_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_Holdatwaypoint_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Holdatwaypoint = {
	"Holdatwaypoint",
	"Holdatwaypoint",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Holdatwaypoint_tags_1,
	sizeof(asn_DEF_Holdatwaypoint_tags_1)
		/sizeof(asn_DEF_Holdatwaypoint_tags_1[0]), /* 1 */
	asn_DEF_Holdatwaypoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_Holdatwaypoint_tags_1)
		/sizeof(asn_DEF_Holdatwaypoint_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Holdatwaypoint_1,
	8,	/* Elements count */
	&asn_SPC_Holdatwaypoint_specs_1	/* Additional specs */
};

